;;;============================================================================

;;; File: "intf_android.scm"

;;; Copyright (c) 2011 by Marc Feeley, All Rights Reserved.

;;;============================================================================


(##namespace ("intf#"))

(##include "~~lib/gambit#.scm")
(##include "~~lib/_gambit#.scm")

(##include "intf#.scm")
(##include "../url#.scm")
(##include "../repl-server#.scm")

(declare
 (standard-bindings)
 (extended-bindings)
 (block)
 (fixnum)
 ;;(not safe)
)


;;;----------------------------------------------------------------------------

;; Interface with Android GUI

;; This apparently specifies the bundle and bundle display name for iOS.
;; Hard code for now on Android...may need equivalent info from manifest.

(define CFBundleName "Gambit REPL dev")
(define CFBundleDisplayName "Gambit REPL dev")

;; Gambit functions callable from Java/C via JNI

(define (set-cwd s)
  (current-directory s)
  (##void))

(c-define (c-start_repl_server passwd) (char-string) void "start_repl_server" "" (repl-server-start passwd))

(c-define (c-setcwd s) (char-string) void "setcwd" "" (set-cwd s))

(c-define (send-input str) (char-string) void "send_input" "extern"

  (let ((rp repl-port))
    (if (port? rp)
        (begin
          (display str rp)
          (force-output rp)))))
          
(c-define (send-event str) (char-string) void "sendevent" "extern"
 (let ((ep event-port))
    (if (port? ep)
        (begin
          (write str ep)
          (force-output ep)))))

;; -------------------------------------------------------------------------------------------
;; java methods callable (via jni) from scheme

;; log strings accessible via android logcat
(define alog
  (c-lambda (char-string) void "alog"))

(define show-ReplView
  (c-lambda () void "java_show_ReplView"))

(define show-webView
  (c-lambda (int) void "java_show_webView"))

(define (set-webView-content view str #!optional (base-url-path #f) (enable-scaling #f) (mime-type "text/html"))
  ((c-lambda (int char-string char-string bool char-string) void "java_set_webView_content") view str base-url-path enable-scaling mime-type))
(define (set-webView-content-from-file view path #!optional (base-url-path (path-directory path)) (enable-scaling #f) (mime-type "text/html"))
  ((c-lambda (int char-string char-string bool char-string) void "java_set_webView_content_from_file") view path base-url-path enable-scaling mime-type))

(define open-URL
  (c-lambda (char-string) void "java_open_URL"))

(define add-expr
  (c-lambda (char-string) void "java_add_expr"))

(define add-output-to-textView
  (c-lambda (int char-string) void "java_add_output_to_textview"))

(define add-input-to-textView
  (c-lambda (int char-string) void "java_add_input_to_textview"))

(define show-textView
  (c-lambda (int) void "java_show_textView"))
  
(define eval-js-in-webView
  (c-lambda (int char-string) char-string "java_eval_js_in_webView"))

(define get-pasteboard
  (c-lambda () char-string "java_get_pasteboard"))

(define set-navigation
  (c-lambda (int) void "java_set_navigation"))

(define show-cancelButton
  (c-lambda () void "java_show_cancelButton"))

(define hide-cancelButton
  (c-lambda () void "java_hide_cancelButton"))
  
(define segm-ctrl-set-title
  (c-lambda (int char-string) void "java_segm_ctrl_set_title"))
  
(define popup-alert
  (c-lambda (char-string char-string char-string char-string) void "java_popup_alert"))

(define set-pref
  (c-lambda (char-string char-string) void "java_set_pref"))

(define get-pref
  (c-lambda (char-string) char-string "java_get_pref"))

;;;-----------------------------------------------------------------------------
(define handle-key #f)

(set! handle-key
  (lambda (str)
    (add-input-to-textView 0 str)))

(c-define (heartbeat) () void "heartbeat" "extern"
     (##thread-heartbeat!)
     
     ;;if there has been any REPL output, return it
    (let ((output (read-line repl-port #f)))
    (if (string? output)
        (add-output-to-textView 0 output))))


(c-define (eval-string str) (char-string) char-string "eval_string" "extern"
  (let ()

    (define (catch-all-errors thunk)
      (with-exception-catcher
       (lambda (exc)
         (write-to-string exc))
       thunk))

    (define (write-to-string obj)
      (with-output-to-string
        ""
        (lambda () (write obj))))

    (define (read-from-string str)
      (with-input-from-string str read))

    (catch-all-errors
     (lambda () (write-to-string (eval (read-from-string str)))))))

;;;----------------------------------------------------------------------------

;; Setup pipe to do I/O on the REPL being run by the primordial thread.

(define repl-port #f)

(receive (i o) (open-string-pipe)

  ;; Hack... set the names of the port.
  (##vector-set! i 4 (lambda (port) '(console)))

  (set! ##stdio/console-repl-channel (##make-repl-channel-ports i i))

  (set! repl-port o)

  (input-port-timeout-set! o -inf.0))

;;;----------------------------------------------------------------------------

;; Handling of events from the webView.

(define event-port #f)

(define event-handler
  (lambda (event)
    ;; ignore event
    #f))

(receive (i o) (open-vector-pipe '(direction: input))

  (set! event-port o)

  (thread-start!
   (make-thread
    (lambda ()
      (let loop ()
        (let ((event (read i)))
          (if (not (eof-object? event))
              (begin
                (event-handler event)
                (loop)))))))))

(define (set-event-handler proc)
  (set! event-handler (proc event-handler)))

(define (show-view view)
  (show-webView view))

(define (set-view-content view content #!optional (base-url-path #f) (enable-scaling #f) (mime-type "text/html"))
  (set-webView-content
   view
   (with-output-to-string "" (lambda () (print content)))
   base-url-path
   enable-scaling
   mime-type))

(define (has-prefix? str prefix)
  (and (string? str)
       (string? prefix)
       (let ((len-str (string-length str))
             (len-prefix (string-length prefix)))
         (and (>= len-str len-prefix)
              (string=? (substring str 0 len-prefix) prefix)
              (substring str len-prefix len-str)))))

(define (get-event-parameters rest)
  (call-with-input-string
   rest
   (lambda (port)
     (map url-decode
          (read-all port (lambda (p) (read-line p #\:)))))))


;;;----------------------------------------------------------------------------

;; Make it impossible to quit the application with a call to "exit" or
;; with a ",q" from the REPL.

;; TODO - this is not handled the same way in android at present

(set! ##exit
      (lambda (#!optional (status 0))
        (error "To exit, press the sleep button for 5 seconds then the home button for 10 seconds")))


;;;----------------------------------------------------------------------------

;; Make it impossible to access files outside of Gambit REPL.

;; The "~~" path will be equal to the app's bundle directory.  The app's
;; home directory is the directory containing the app's bundle directory.

(define app-home-dir
  (##path-normalize current-directory))

(define (contained-path-resolve path)
  (let loop ()
    (let ((str (##path-expand path)))
      (if (has-prefix? (##path-normalize str) app-home-dir)
          str ;; only allow files in app directory
          (begin
            (error "App container violation")
            (loop))))))

;;(set! ##path-resolve-hook contained-path-resolve)

(set! ##os-path-homedir current-directory)
;;      (c-lambda () NSString* "get_documents_dir"))

;; TODO 
;;(current-directory "~")

;;;============================================================================
