#ifdef ___LINKER_INFO
; File: "intf.c", produced by Gambit-C v4.7.0
(
407000
" intf"
(" intf")
(
"console"
"input"
)
(
"direction"
)
(
" intf"
" intf#0"
" intf#1"
" intf#10"
" intf#11"
" intf#12"
" intf#13"
" intf#14"
" intf#15"
" intf#16"
" intf#17"
" intf#18"
" intf#2"
" intf#3"
" intf#4"
" intf#5"
" intf#6"
" intf#7"
" intf#8"
" intf#9"
"intf#app-home-dir"
"intf#event-handler"
"intf#event-port"
"intf#has-prefix?"
"intf#repl-port"
)
(
"##exit"
"##os-path-homedir"
"##stdio/console-repl-channel"
"intf#CFBundleDisplayName"
"intf#CFBundleName"
"intf#add-expr"
"intf#add-input-to-textView"
"intf#add-output-to-textView"
"intf#alog"
"intf#c-setcwd"
"intf#c-start_repl_server"
"intf#contained-path-resolve"
"intf#eval-js-in-webView"
"intf#eval-string"
"intf#get-event-parameters"
"intf#get-pasteboard"
"intf#get-pref"
"intf#handle-key"
"intf#heartbeat"
"intf#hide-cancelButton"
"intf#open-URL"
"intf#popup-alert"
"intf#segm-ctrl-set-title"
"intf#send-event"
"intf#send-input"
"intf#set-cwd"
"intf#set-event-handler"
"intf#set-navigation"
"intf#set-pref"
"intf#set-view-content"
"intf#set-webView-content"
"intf#set-webView-content-from-file"
"intf#show-ReplView"
"intf#show-cancelButton"
"intf#show-textView"
"intf#show-view"
"intf#show-webView"
)
(
"##call-with-values"
"##make-repl-channel-ports"
"##path-expand"
"##path-normalize"
"##thread-heartbeat!"
"##vector-set!"
"call-with-input-string"
"current-directory"
"display"
"error"
"eval"
"force-output"
"fx>="
"input-port-timeout-set!"
"make-thread"
"map"
"open-string-pipe"
"open-vector-pipe"
"path-directory"
"port?"
"print"
"read"
"read-all"
"read-line"
"repl-server#repl-server-start"
"string-length"
"string=?"
"substring"
"thread-start!"
"url#url-decode"
"with-exception-catcher"
"with-input-from-string"
"with-output-to-string"
"write"
)
 #f
)
#else
#define ___VERSION 407000
#define ___MODULE_NAME " intf"
#define ___LINKER_ID ____20_intf
#define ___MH_PROC ___H__20_intf
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 2
#define ___KEYCOUNT 1
#define ___GLOCOUNT 96
#define ___SUPCOUNT 62
#define ___CNSCOUNT 3
#define ___SUBCOUNT 10
#define ___LBLCOUNT 208
#define ___OFDCOUNT 3
#include "gambit.h"

___NEED_SYM(___S_console)
___NEED_SYM(___S_input)

___NEED_KEY(___K_direction)

___NEED_GLO(___G__20_intf)
___NEED_GLO(___G__20_intf_23_0)
___NEED_GLO(___G__20_intf_23_1)
___NEED_GLO(___G__20_intf_23_10)
___NEED_GLO(___G__20_intf_23_11)
___NEED_GLO(___G__20_intf_23_12)
___NEED_GLO(___G__20_intf_23_13)
___NEED_GLO(___G__20_intf_23_14)
___NEED_GLO(___G__20_intf_23_15)
___NEED_GLO(___G__20_intf_23_16)
___NEED_GLO(___G__20_intf_23_17)
___NEED_GLO(___G__20_intf_23_18)
___NEED_GLO(___G__20_intf_23_2)
___NEED_GLO(___G__20_intf_23_3)
___NEED_GLO(___G__20_intf_23_4)
___NEED_GLO(___G__20_intf_23_5)
___NEED_GLO(___G__20_intf_23_6)
___NEED_GLO(___G__20_intf_23_7)
___NEED_GLO(___G__20_intf_23_8)
___NEED_GLO(___G__20_intf_23_9)
___NEED_GLO(___G__23__23_call_2d_with_2d_values)
___NEED_GLO(___G__23__23_exit)
___NEED_GLO(___G__23__23_make_2d_repl_2d_channel_2d_ports)
___NEED_GLO(___G__23__23_os_2d_path_2d_homedir)
___NEED_GLO(___G__23__23_path_2d_expand)
___NEED_GLO(___G__23__23_path_2d_normalize)
___NEED_GLO(___G__23__23_stdio_2f_console_2d_repl_2d_channel)
___NEED_GLO(___G__23__23_thread_2d_heartbeat_21_)
___NEED_GLO(___G__23__23_vector_2d_set_21_)
___NEED_GLO(___G_call_2d_with_2d_input_2d_string)
___NEED_GLO(___G_current_2d_directory)
___NEED_GLO(___G_display)
___NEED_GLO(___G_error)
___NEED_GLO(___G_eval)
___NEED_GLO(___G_force_2d_output)
___NEED_GLO(___G_fx_3e__3d_)
___NEED_GLO(___G_input_2d_port_2d_timeout_2d_set_21_)
___NEED_GLO(___G_intf_23_CFBundleDisplayName)
___NEED_GLO(___G_intf_23_CFBundleName)
___NEED_GLO(___G_intf_23_add_2d_expr)
___NEED_GLO(___G_intf_23_add_2d_input_2d_to_2d_textView)
___NEED_GLO(___G_intf_23_add_2d_output_2d_to_2d_textView)
___NEED_GLO(___G_intf_23_alog)
___NEED_GLO(___G_intf_23_app_2d_home_2d_dir)
___NEED_GLO(___G_intf_23_c_2d_setcwd)
___NEED_GLO(___G_intf_23_c_2d_start__repl__server)
___NEED_GLO(___G_intf_23_contained_2d_path_2d_resolve)
___NEED_GLO(___G_intf_23_eval_2d_js_2d_in_2d_webView)
___NEED_GLO(___G_intf_23_eval_2d_string)
___NEED_GLO(___G_intf_23_event_2d_handler)
___NEED_GLO(___G_intf_23_event_2d_port)
___NEED_GLO(___G_intf_23_get_2d_event_2d_parameters)
___NEED_GLO(___G_intf_23_get_2d_pasteboard)
___NEED_GLO(___G_intf_23_get_2d_pref)
___NEED_GLO(___G_intf_23_handle_2d_key)
___NEED_GLO(___G_intf_23_has_2d_prefix_3f_)
___NEED_GLO(___G_intf_23_heartbeat)
___NEED_GLO(___G_intf_23_hide_2d_cancelButton)
___NEED_GLO(___G_intf_23_open_2d_URL)
___NEED_GLO(___G_intf_23_popup_2d_alert)
___NEED_GLO(___G_intf_23_repl_2d_port)
___NEED_GLO(___G_intf_23_segm_2d_ctrl_2d_set_2d_title)
___NEED_GLO(___G_intf_23_send_2d_event)
___NEED_GLO(___G_intf_23_send_2d_input)
___NEED_GLO(___G_intf_23_set_2d_cwd)
___NEED_GLO(___G_intf_23_set_2d_event_2d_handler)
___NEED_GLO(___G_intf_23_set_2d_navigation)
___NEED_GLO(___G_intf_23_set_2d_pref)
___NEED_GLO(___G_intf_23_set_2d_view_2d_content)
___NEED_GLO(___G_intf_23_set_2d_webView_2d_content)
___NEED_GLO(___G_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___NEED_GLO(___G_intf_23_show_2d_ReplView)
___NEED_GLO(___G_intf_23_show_2d_cancelButton)
___NEED_GLO(___G_intf_23_show_2d_textView)
___NEED_GLO(___G_intf_23_show_2d_view)
___NEED_GLO(___G_intf_23_show_2d_webView)
___NEED_GLO(___G_make_2d_thread)
___NEED_GLO(___G_map)
___NEED_GLO(___G_open_2d_string_2d_pipe)
___NEED_GLO(___G_open_2d_vector_2d_pipe)
___NEED_GLO(___G_path_2d_directory)
___NEED_GLO(___G_port_3f_)
___NEED_GLO(___G_print)
___NEED_GLO(___G_read)
___NEED_GLO(___G_read_2d_all)
___NEED_GLO(___G_read_2d_line)
___NEED_GLO(___G_repl_2d_server_23_repl_2d_server_2d_start)
___NEED_GLO(___G_string_2d_length)
___NEED_GLO(___G_string_3d__3f_)
___NEED_GLO(___G_substring)
___NEED_GLO(___G_thread_2d_start_21_)
___NEED_GLO(___G_url_23_url_2d_decode)
___NEED_GLO(___G_with_2d_exception_2d_catcher)
___NEED_GLO(___G_with_2d_input_2d_from_2d_string)
___NEED_GLO(___G_with_2d_output_2d_to_2d_string)
___NEED_GLO(___G_write)

___BEGIN_SYM1
___DEF_SYM1(0,___S_console,"console")
___DEF_SYM1(1,___S_input,"input")
___END_SYM1

#define ___SYM_console ___SYM(0,___S_console)
#define ___SYM_input ___SYM(1,___S_input)

___BEGIN_KEY1
___DEF_KEY1(0,___K_direction,"direction")
___END_KEY1

#define ___KEY_direction ___KEY(0,___K_direction)

___BEGIN_GLO
___DEF_GLO(0," intf")
___DEF_GLO(1," intf#0")
___DEF_GLO(2," intf#1")
___DEF_GLO(3," intf#10")
___DEF_GLO(4," intf#11")
___DEF_GLO(5," intf#12")
___DEF_GLO(6," intf#13")
___DEF_GLO(7," intf#14")
___DEF_GLO(8," intf#15")
___DEF_GLO(9," intf#16")
___DEF_GLO(10," intf#17")
___DEF_GLO(11," intf#18")
___DEF_GLO(12," intf#2")
___DEF_GLO(13," intf#3")
___DEF_GLO(14," intf#4")
___DEF_GLO(15," intf#5")
___DEF_GLO(16," intf#6")
___DEF_GLO(17," intf#7")
___DEF_GLO(18," intf#8")
___DEF_GLO(19," intf#9")
___DEF_GLO(20,"##exit")
___DEF_GLO(21,"##os-path-homedir")
___DEF_GLO(22,"##stdio/console-repl-channel")
___DEF_GLO(23,"intf#CFBundleDisplayName")
___DEF_GLO(24,"intf#CFBundleName")
___DEF_GLO(25,"intf#add-expr")
___DEF_GLO(26,"intf#add-input-to-textView")
___DEF_GLO(27,"intf#add-output-to-textView")
___DEF_GLO(28,"intf#alog")
___DEF_GLO(29,"intf#app-home-dir")
___DEF_GLO(30,"intf#c-setcwd")
___DEF_GLO(31,"intf#c-start_repl_server")
___DEF_GLO(32,"intf#contained-path-resolve")
___DEF_GLO(33,"intf#eval-js-in-webView")
___DEF_GLO(34,"intf#eval-string")
___DEF_GLO(35,"intf#event-handler")
___DEF_GLO(36,"intf#event-port")
___DEF_GLO(37,"intf#get-event-parameters")
___DEF_GLO(38,"intf#get-pasteboard")
___DEF_GLO(39,"intf#get-pref")
___DEF_GLO(40,"intf#handle-key")
___DEF_GLO(41,"intf#has-prefix?")
___DEF_GLO(42,"intf#heartbeat")
___DEF_GLO(43,"intf#hide-cancelButton")
___DEF_GLO(44,"intf#open-URL")
___DEF_GLO(45,"intf#popup-alert")
___DEF_GLO(46,"intf#repl-port")
___DEF_GLO(47,"intf#segm-ctrl-set-title")
___DEF_GLO(48,"intf#send-event")
___DEF_GLO(49,"intf#send-input")
___DEF_GLO(50,"intf#set-cwd")
___DEF_GLO(51,"intf#set-event-handler")
___DEF_GLO(52,"intf#set-navigation")
___DEF_GLO(53,"intf#set-pref")
___DEF_GLO(54,"intf#set-view-content")
___DEF_GLO(55,"intf#set-webView-content")
___DEF_GLO(56,"intf#set-webView-content-from-file")

___DEF_GLO(57,"intf#show-ReplView")
___DEF_GLO(58,"intf#show-cancelButton")
___DEF_GLO(59,"intf#show-textView")
___DEF_GLO(60,"intf#show-view")
___DEF_GLO(61,"intf#show-webView")
___DEF_GLO(62,"##call-with-values")
___DEF_GLO(63,"##make-repl-channel-ports")
___DEF_GLO(64,"##path-expand")
___DEF_GLO(65,"##path-normalize")
___DEF_GLO(66,"##thread-heartbeat!")
___DEF_GLO(67,"##vector-set!")
___DEF_GLO(68,"call-with-input-string")
___DEF_GLO(69,"current-directory")
___DEF_GLO(70,"display")
___DEF_GLO(71,"error")
___DEF_GLO(72,"eval")
___DEF_GLO(73,"force-output")
___DEF_GLO(74,"fx>=")
___DEF_GLO(75,"input-port-timeout-set!")
___DEF_GLO(76,"make-thread")
___DEF_GLO(77,"map")
___DEF_GLO(78,"open-string-pipe")
___DEF_GLO(79,"open-vector-pipe")
___DEF_GLO(80,"path-directory")
___DEF_GLO(81,"port?")
___DEF_GLO(82,"print")
___DEF_GLO(83,"read")
___DEF_GLO(84,"read-all")
___DEF_GLO(85,"read-line")
___DEF_GLO(86,"repl-server#repl-server-start")
___DEF_GLO(87,"string-length")
___DEF_GLO(88,"string=?")
___DEF_GLO(89,"substring")
___DEF_GLO(90,"thread-start!")
___DEF_GLO(91,"url#url-decode")
___DEF_GLO(92,"with-exception-catcher")
___DEF_GLO(93,"with-input-from-string")
___DEF_GLO(94,"with-output-to-string")
___DEF_GLO(95,"write")
___END_GLO

#define ___GLO__20_intf ___GLO(0,___G__20_intf)
#define ___PRM__20_intf ___PRM(0,___G__20_intf)
#define ___GLO__20_intf_23_0 ___GLO(1,___G__20_intf_23_0)
#define ___PRM__20_intf_23_0 ___PRM(1,___G__20_intf_23_0)
#define ___GLO__20_intf_23_1 ___GLO(2,___G__20_intf_23_1)
#define ___PRM__20_intf_23_1 ___PRM(2,___G__20_intf_23_1)
#define ___GLO__20_intf_23_10 ___GLO(3,___G__20_intf_23_10)
#define ___PRM__20_intf_23_10 ___PRM(3,___G__20_intf_23_10)
#define ___GLO__20_intf_23_11 ___GLO(4,___G__20_intf_23_11)
#define ___PRM__20_intf_23_11 ___PRM(4,___G__20_intf_23_11)
#define ___GLO__20_intf_23_12 ___GLO(5,___G__20_intf_23_12)
#define ___PRM__20_intf_23_12 ___PRM(5,___G__20_intf_23_12)
#define ___GLO__20_intf_23_13 ___GLO(6,___G__20_intf_23_13)
#define ___PRM__20_intf_23_13 ___PRM(6,___G__20_intf_23_13)
#define ___GLO__20_intf_23_14 ___GLO(7,___G__20_intf_23_14)
#define ___PRM__20_intf_23_14 ___PRM(7,___G__20_intf_23_14)
#define ___GLO__20_intf_23_15 ___GLO(8,___G__20_intf_23_15)
#define ___PRM__20_intf_23_15 ___PRM(8,___G__20_intf_23_15)
#define ___GLO__20_intf_23_16 ___GLO(9,___G__20_intf_23_16)
#define ___PRM__20_intf_23_16 ___PRM(9,___G__20_intf_23_16)
#define ___GLO__20_intf_23_17 ___GLO(10,___G__20_intf_23_17)
#define ___PRM__20_intf_23_17 ___PRM(10,___G__20_intf_23_17)
#define ___GLO__20_intf_23_18 ___GLO(11,___G__20_intf_23_18)
#define ___PRM__20_intf_23_18 ___PRM(11,___G__20_intf_23_18)
#define ___GLO__20_intf_23_2 ___GLO(12,___G__20_intf_23_2)
#define ___PRM__20_intf_23_2 ___PRM(12,___G__20_intf_23_2)
#define ___GLO__20_intf_23_3 ___GLO(13,___G__20_intf_23_3)
#define ___PRM__20_intf_23_3 ___PRM(13,___G__20_intf_23_3)
#define ___GLO__20_intf_23_4 ___GLO(14,___G__20_intf_23_4)
#define ___PRM__20_intf_23_4 ___PRM(14,___G__20_intf_23_4)
#define ___GLO__20_intf_23_5 ___GLO(15,___G__20_intf_23_5)
#define ___PRM__20_intf_23_5 ___PRM(15,___G__20_intf_23_5)
#define ___GLO__20_intf_23_6 ___GLO(16,___G__20_intf_23_6)
#define ___PRM__20_intf_23_6 ___PRM(16,___G__20_intf_23_6)
#define ___GLO__20_intf_23_7 ___GLO(17,___G__20_intf_23_7)
#define ___PRM__20_intf_23_7 ___PRM(17,___G__20_intf_23_7)
#define ___GLO__20_intf_23_8 ___GLO(18,___G__20_intf_23_8)
#define ___PRM__20_intf_23_8 ___PRM(18,___G__20_intf_23_8)
#define ___GLO__20_intf_23_9 ___GLO(19,___G__20_intf_23_9)
#define ___PRM__20_intf_23_9 ___PRM(19,___G__20_intf_23_9)
#define ___GLO__23__23_exit ___GLO(20,___G__23__23_exit)
#define ___PRM__23__23_exit ___PRM(20,___G__23__23_exit)
#define ___GLO__23__23_os_2d_path_2d_homedir ___GLO(21,___G__23__23_os_2d_path_2d_homedir)
#define ___PRM__23__23_os_2d_path_2d_homedir ___PRM(21,___G__23__23_os_2d_path_2d_homedir)
#define ___GLO__23__23_stdio_2f_console_2d_repl_2d_channel ___GLO(22,___G__23__23_stdio_2f_console_2d_repl_2d_channel)
#define ___PRM__23__23_stdio_2f_console_2d_repl_2d_channel ___PRM(22,___G__23__23_stdio_2f_console_2d_repl_2d_channel)
#define ___GLO_intf_23_CFBundleDisplayName ___GLO(23,___G_intf_23_CFBundleDisplayName)
#define ___PRM_intf_23_CFBundleDisplayName ___PRM(23,___G_intf_23_CFBundleDisplayName)
#define ___GLO_intf_23_CFBundleName ___GLO(24,___G_intf_23_CFBundleName)
#define ___PRM_intf_23_CFBundleName ___PRM(24,___G_intf_23_CFBundleName)
#define ___GLO_intf_23_add_2d_expr ___GLO(25,___G_intf_23_add_2d_expr)
#define ___PRM_intf_23_add_2d_expr ___PRM(25,___G_intf_23_add_2d_expr)
#define ___GLO_intf_23_add_2d_input_2d_to_2d_textView ___GLO(26,___G_intf_23_add_2d_input_2d_to_2d_textView)
#define ___PRM_intf_23_add_2d_input_2d_to_2d_textView ___PRM(26,___G_intf_23_add_2d_input_2d_to_2d_textView)
#define ___GLO_intf_23_add_2d_output_2d_to_2d_textView ___GLO(27,___G_intf_23_add_2d_output_2d_to_2d_textView)
#define ___PRM_intf_23_add_2d_output_2d_to_2d_textView ___PRM(27,___G_intf_23_add_2d_output_2d_to_2d_textView)
#define ___GLO_intf_23_alog ___GLO(28,___G_intf_23_alog)
#define ___PRM_intf_23_alog ___PRM(28,___G_intf_23_alog)
#define ___GLO_intf_23_app_2d_home_2d_dir ___GLO(29,___G_intf_23_app_2d_home_2d_dir)
#define ___PRM_intf_23_app_2d_home_2d_dir ___PRM(29,___G_intf_23_app_2d_home_2d_dir)
#define ___GLO_intf_23_c_2d_setcwd ___GLO(30,___G_intf_23_c_2d_setcwd)
#define ___PRM_intf_23_c_2d_setcwd ___PRM(30,___G_intf_23_c_2d_setcwd)
#define ___GLO_intf_23_c_2d_start__repl__server ___GLO(31,___G_intf_23_c_2d_start__repl__server)
#define ___PRM_intf_23_c_2d_start__repl__server ___PRM(31,___G_intf_23_c_2d_start__repl__server)
#define ___GLO_intf_23_contained_2d_path_2d_resolve ___GLO(32,___G_intf_23_contained_2d_path_2d_resolve)
#define ___PRM_intf_23_contained_2d_path_2d_resolve ___PRM(32,___G_intf_23_contained_2d_path_2d_resolve)
#define ___GLO_intf_23_eval_2d_js_2d_in_2d_webView ___GLO(33,___G_intf_23_eval_2d_js_2d_in_2d_webView)
#define ___PRM_intf_23_eval_2d_js_2d_in_2d_webView ___PRM(33,___G_intf_23_eval_2d_js_2d_in_2d_webView)
#define ___GLO_intf_23_eval_2d_string ___GLO(34,___G_intf_23_eval_2d_string)
#define ___PRM_intf_23_eval_2d_string ___PRM(34,___G_intf_23_eval_2d_string)
#define ___GLO_intf_23_event_2d_handler ___GLO(35,___G_intf_23_event_2d_handler)
#define ___PRM_intf_23_event_2d_handler ___PRM(35,___G_intf_23_event_2d_handler)
#define ___GLO_intf_23_event_2d_port ___GLO(36,___G_intf_23_event_2d_port)
#define ___PRM_intf_23_event_2d_port ___PRM(36,___G_intf_23_event_2d_port)
#define ___GLO_intf_23_get_2d_event_2d_parameters ___GLO(37,___G_intf_23_get_2d_event_2d_parameters)
#define ___PRM_intf_23_get_2d_event_2d_parameters ___PRM(37,___G_intf_23_get_2d_event_2d_parameters)
#define ___GLO_intf_23_get_2d_pasteboard ___GLO(38,___G_intf_23_get_2d_pasteboard)
#define ___PRM_intf_23_get_2d_pasteboard ___PRM(38,___G_intf_23_get_2d_pasteboard)
#define ___GLO_intf_23_get_2d_pref ___GLO(39,___G_intf_23_get_2d_pref)
#define ___PRM_intf_23_get_2d_pref ___PRM(39,___G_intf_23_get_2d_pref)
#define ___GLO_intf_23_handle_2d_key ___GLO(40,___G_intf_23_handle_2d_key)
#define ___PRM_intf_23_handle_2d_key ___PRM(40,___G_intf_23_handle_2d_key)
#define ___GLO_intf_23_has_2d_prefix_3f_ ___GLO(41,___G_intf_23_has_2d_prefix_3f_)
#define ___PRM_intf_23_has_2d_prefix_3f_ ___PRM(41,___G_intf_23_has_2d_prefix_3f_)
#define ___GLO_intf_23_heartbeat ___GLO(42,___G_intf_23_heartbeat)
#define ___PRM_intf_23_heartbeat ___PRM(42,___G_intf_23_heartbeat)
#define ___GLO_intf_23_hide_2d_cancelButton ___GLO(43,___G_intf_23_hide_2d_cancelButton)
#define ___PRM_intf_23_hide_2d_cancelButton ___PRM(43,___G_intf_23_hide_2d_cancelButton)
#define ___GLO_intf_23_open_2d_URL ___GLO(44,___G_intf_23_open_2d_URL)
#define ___PRM_intf_23_open_2d_URL ___PRM(44,___G_intf_23_open_2d_URL)
#define ___GLO_intf_23_popup_2d_alert ___GLO(45,___G_intf_23_popup_2d_alert)
#define ___PRM_intf_23_popup_2d_alert ___PRM(45,___G_intf_23_popup_2d_alert)
#define ___GLO_intf_23_repl_2d_port ___GLO(46,___G_intf_23_repl_2d_port)
#define ___PRM_intf_23_repl_2d_port ___PRM(46,___G_intf_23_repl_2d_port)
#define ___GLO_intf_23_segm_2d_ctrl_2d_set_2d_title ___GLO(47,___G_intf_23_segm_2d_ctrl_2d_set_2d_title)
#define ___PRM_intf_23_segm_2d_ctrl_2d_set_2d_title ___PRM(47,___G_intf_23_segm_2d_ctrl_2d_set_2d_title)
#define ___GLO_intf_23_send_2d_event ___GLO(48,___G_intf_23_send_2d_event)
#define ___PRM_intf_23_send_2d_event ___PRM(48,___G_intf_23_send_2d_event)
#define ___GLO_intf_23_send_2d_input ___GLO(49,___G_intf_23_send_2d_input)
#define ___PRM_intf_23_send_2d_input ___PRM(49,___G_intf_23_send_2d_input)
#define ___GLO_intf_23_set_2d_cwd ___GLO(50,___G_intf_23_set_2d_cwd)
#define ___PRM_intf_23_set_2d_cwd ___PRM(50,___G_intf_23_set_2d_cwd)
#define ___GLO_intf_23_set_2d_event_2d_handler ___GLO(51,___G_intf_23_set_2d_event_2d_handler)
#define ___PRM_intf_23_set_2d_event_2d_handler ___PRM(51,___G_intf_23_set_2d_event_2d_handler)
#define ___GLO_intf_23_set_2d_navigation ___GLO(52,___G_intf_23_set_2d_navigation)
#define ___PRM_intf_23_set_2d_navigation ___PRM(52,___G_intf_23_set_2d_navigation)
#define ___GLO_intf_23_set_2d_pref ___GLO(53,___G_intf_23_set_2d_pref)
#define ___PRM_intf_23_set_2d_pref ___PRM(53,___G_intf_23_set_2d_pref)
#define ___GLO_intf_23_set_2d_view_2d_content ___GLO(54,___G_intf_23_set_2d_view_2d_content)
#define ___PRM_intf_23_set_2d_view_2d_content ___PRM(54,___G_intf_23_set_2d_view_2d_content)
#define ___GLO_intf_23_set_2d_webView_2d_content ___GLO(55,___G_intf_23_set_2d_webView_2d_content)
#define ___PRM_intf_23_set_2d_webView_2d_content ___PRM(55,___G_intf_23_set_2d_webView_2d_content)
#define ___GLO_intf_23_set_2d_webView_2d_content_2d_from_2d_file ___GLO(56,___G_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
#define ___PRM_intf_23_set_2d_webView_2d_content_2d_from_2d_file ___PRM(56,___G_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
#define ___GLO_intf_23_show_2d_ReplView ___GLO(57,___G_intf_23_show_2d_ReplView)
#define ___PRM_intf_23_show_2d_ReplView ___PRM(57,___G_intf_23_show_2d_ReplView)
#define ___GLO_intf_23_show_2d_cancelButton ___GLO(58,___G_intf_23_show_2d_cancelButton)
#define ___PRM_intf_23_show_2d_cancelButton ___PRM(58,___G_intf_23_show_2d_cancelButton)
#define ___GLO_intf_23_show_2d_textView ___GLO(59,___G_intf_23_show_2d_textView)
#define ___PRM_intf_23_show_2d_textView ___PRM(59,___G_intf_23_show_2d_textView)
#define ___GLO_intf_23_show_2d_view ___GLO(60,___G_intf_23_show_2d_view)
#define ___PRM_intf_23_show_2d_view ___PRM(60,___G_intf_23_show_2d_view)
#define ___GLO_intf_23_show_2d_webView ___GLO(61,___G_intf_23_show_2d_webView)
#define ___PRM_intf_23_show_2d_webView ___PRM(61,___G_intf_23_show_2d_webView)
#define ___GLO__23__23_call_2d_with_2d_values ___GLO(62,___G__23__23_call_2d_with_2d_values)
#define ___PRM__23__23_call_2d_with_2d_values ___PRM(62,___G__23__23_call_2d_with_2d_values)
#define ___GLO__23__23_make_2d_repl_2d_channel_2d_ports ___GLO(63,___G__23__23_make_2d_repl_2d_channel_2d_ports)
#define ___PRM__23__23_make_2d_repl_2d_channel_2d_ports ___PRM(63,___G__23__23_make_2d_repl_2d_channel_2d_ports)
#define ___GLO__23__23_path_2d_expand ___GLO(64,___G__23__23_path_2d_expand)
#define ___PRM__23__23_path_2d_expand ___PRM(64,___G__23__23_path_2d_expand)
#define ___GLO__23__23_path_2d_normalize ___GLO(65,___G__23__23_path_2d_normalize)
#define ___PRM__23__23_path_2d_normalize ___PRM(65,___G__23__23_path_2d_normalize)
#define ___GLO__23__23_thread_2d_heartbeat_21_ ___GLO(66,___G__23__23_thread_2d_heartbeat_21_)
#define ___PRM__23__23_thread_2d_heartbeat_21_ ___PRM(66,___G__23__23_thread_2d_heartbeat_21_)
#define ___GLO__23__23_vector_2d_set_21_ ___GLO(67,___G__23__23_vector_2d_set_21_)
#define ___PRM__23__23_vector_2d_set_21_ ___PRM(67,___G__23__23_vector_2d_set_21_)
#define ___GLO_call_2d_with_2d_input_2d_string ___GLO(68,___G_call_2d_with_2d_input_2d_string)
#define ___PRM_call_2d_with_2d_input_2d_string ___PRM(68,___G_call_2d_with_2d_input_2d_string)
#define ___GLO_current_2d_directory ___GLO(69,___G_current_2d_directory)
#define ___PRM_current_2d_directory ___PRM(69,___G_current_2d_directory)
#define ___GLO_display ___GLO(70,___G_display)
#define ___PRM_display ___PRM(70,___G_display)
#define ___GLO_error ___GLO(71,___G_error)
#define ___PRM_error ___PRM(71,___G_error)
#define ___GLO_eval ___GLO(72,___G_eval)
#define ___PRM_eval ___PRM(72,___G_eval)
#define ___GLO_force_2d_output ___GLO(73,___G_force_2d_output)
#define ___PRM_force_2d_output ___PRM(73,___G_force_2d_output)
#define ___GLO_fx_3e__3d_ ___GLO(74,___G_fx_3e__3d_)
#define ___PRM_fx_3e__3d_ ___PRM(74,___G_fx_3e__3d_)
#define ___GLO_input_2d_port_2d_timeout_2d_set_21_ ___GLO(75,___G_input_2d_port_2d_timeout_2d_set_21_)
#define ___PRM_input_2d_port_2d_timeout_2d_set_21_ ___PRM(75,___G_input_2d_port_2d_timeout_2d_set_21_)
#define ___GLO_make_2d_thread ___GLO(76,___G_make_2d_thread)
#define ___PRM_make_2d_thread ___PRM(76,___G_make_2d_thread)
#define ___GLO_map ___GLO(77,___G_map)
#define ___PRM_map ___PRM(77,___G_map)
#define ___GLO_open_2d_string_2d_pipe ___GLO(78,___G_open_2d_string_2d_pipe)
#define ___PRM_open_2d_string_2d_pipe ___PRM(78,___G_open_2d_string_2d_pipe)
#define ___GLO_open_2d_vector_2d_pipe ___GLO(79,___G_open_2d_vector_2d_pipe)
#define ___PRM_open_2d_vector_2d_pipe ___PRM(79,___G_open_2d_vector_2d_pipe)
#define ___GLO_path_2d_directory ___GLO(80,___G_path_2d_directory)
#define ___PRM_path_2d_directory ___PRM(80,___G_path_2d_directory)
#define ___GLO_port_3f_ ___GLO(81,___G_port_3f_)
#define ___PRM_port_3f_ ___PRM(81,___G_port_3f_)
#define ___GLO_print ___GLO(82,___G_print)
#define ___PRM_print ___PRM(82,___G_print)
#define ___GLO_read ___GLO(83,___G_read)
#define ___PRM_read ___PRM(83,___G_read)
#define ___GLO_read_2d_all ___GLO(84,___G_read_2d_all)
#define ___PRM_read_2d_all ___PRM(84,___G_read_2d_all)
#define ___GLO_read_2d_line ___GLO(85,___G_read_2d_line)
#define ___PRM_read_2d_line ___PRM(85,___G_read_2d_line)
#define ___GLO_repl_2d_server_23_repl_2d_server_2d_start ___GLO(86,___G_repl_2d_server_23_repl_2d_server_2d_start)
#define ___PRM_repl_2d_server_23_repl_2d_server_2d_start ___PRM(86,___G_repl_2d_server_23_repl_2d_server_2d_start)
#define ___GLO_string_2d_length ___GLO(87,___G_string_2d_length)
#define ___PRM_string_2d_length ___PRM(87,___G_string_2d_length)
#define ___GLO_string_3d__3f_ ___GLO(88,___G_string_3d__3f_)
#define ___PRM_string_3d__3f_ ___PRM(88,___G_string_3d__3f_)
#define ___GLO_substring ___GLO(89,___G_substring)
#define ___PRM_substring ___PRM(89,___G_substring)
#define ___GLO_thread_2d_start_21_ ___GLO(90,___G_thread_2d_start_21_)
#define ___PRM_thread_2d_start_21_ ___PRM(90,___G_thread_2d_start_21_)
#define ___GLO_url_23_url_2d_decode ___GLO(91,___G_url_23_url_2d_decode)
#define ___PRM_url_23_url_2d_decode ___PRM(91,___G_url_23_url_2d_decode)
#define ___GLO_with_2d_exception_2d_catcher ___GLO(92,___G_with_2d_exception_2d_catcher)
#define ___PRM_with_2d_exception_2d_catcher ___PRM(92,___G_with_2d_exception_2d_catcher)
#define ___GLO_with_2d_input_2d_from_2d_string ___GLO(93,___G_with_2d_input_2d_from_2d_string)
#define ___PRM_with_2d_input_2d_from_2d_string ___PRM(93,___G_with_2d_input_2d_from_2d_string)
#define ___GLO_with_2d_output_2d_to_2d_string ___GLO(94,___G_with_2d_output_2d_to_2d_string)
#define ___PRM_with_2d_output_2d_to_2d_string ___PRM(94,___G_with_2d_output_2d_to_2d_string)
#define ___GLO_write ___GLO(95,___G_write)
#define ___PRM_write ___PRM(95,___G_write)

___BEGIN_CNS
 ___DEF_CNS(___REF_KEY(0,___K_direction),___REF_CNS(1))
,___DEF_CNS(___REF_SYM(1,___S_input),___REF_NUL)
,___DEF_CNS(___REF_SYM(0,___S_console),___REF_NUL)
___END_CNS

___DEF_SUB_STR(___X0,15)
               ___STR8(71,97,109,98,105,116,32,82)
               ___STR7(69,80,76,32,100,101,118)
___DEF_SUB_STR(___X1,15)
               ___STR8(71,97,109,98,105,116,32,82)
               ___STR7(69,80,76,32,100,101,118)
___DEF_SUB_STR(___X2,81)
               ___STR8(84,111,32,101,120,105,116,44)
               ___STR8(32,112,114,101,115,115,32,116)
               ___STR8(104,101,32,115,108,101,101,112)
               ___STR8(32,98,117,116,116,111,110,32)
               ___STR8(102,111,114,32,53,32,115,101)
               ___STR8(99,111,110,100,115,32,116,104)
               ___STR8(101,110,32,116,104,101,32,104)
               ___STR8(111,109,101,32,98,117,116,116)
               ___STR8(111,110,32,102,111,114,32,49)
               ___STR8(48,32,115,101,99,111,110,100)
               ___STR1(115)
___DEF_SUB_FLO(___X3,-0x100000L,0x0L)
___DEF_SUB_STR(___X4,9)
               ___STR8(116,101,120,116,47,104,116,109)
               ___STR1(108)
___DEF_SUB_STR(___X5,9)
               ___STR8(116,101,120,116,47,104,116,109)
               ___STR1(108)
___DEF_SUB_STR(___X6,0)
               ___STR0
___DEF_SUB_STR(___X7,9)
               ___STR8(116,101,120,116,47,104,116,109)
               ___STR1(108)
___DEF_SUB_STR(___X8,0)
               ___STR0
___DEF_SUB_STR(___X9,23)
               ___STR8(65,112,112,32,99,111,110,116)
               ___STR8(97,105,110,101,114,32,118,105)
               ___STR7(111,108,97,116,105,111,110)

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
,___DEF_SUB(___X2)
,___DEF_SUB(___X3)
,___DEF_SUB(___X4)
,___DEF_SUB(___X5)
,___DEF_SUB(___X6)
,___DEF_SUB(___X7)
,___DEF_SUB(___X8)
,___DEF_SUB(___X9)
___END_SUB


#define ___C_LBL_start_repl_server 39
#define ___C_LBL_setcwd 42
#define ___C_LBL_send_input 47
#define ___C_LBL_sendevent 54
#define ___C_LBL_heartbeat 70
#define ___C_LBL_eval_string 77

 void start_repl_server ___P((char* ___arg1),(___arg1)
char* ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_start_repl_server))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

 void setcwd ___P((char* ___arg1),(___arg1)
char* ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_setcwd))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

extern void send_input ___P((char* ___arg1),(___arg1)
char* ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_send_input))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

extern void sendevent ___P((char* ___arg1),(___arg1)
char* ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_sendevent))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

extern void heartbeat ___PVOID
{
#define ___NARGS 0
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_heartbeat))
___BEGIN_SFUN_BODY
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

extern char* eval_string ___P((char* ___arg1),(___arg1)
char* ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN(___MLBL(___C_LBL_eval_string),char* ___result)
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL
___BEGIN_SFUN_SCMOBJ_TO_CHARSTRING(___SFUN_RESULT,___result)
___SFUN_SET_RESULT
___END_SFUN_SCMOBJ_TO_CHARSTRING(___SFUN_RESULT,___result)
___END_SFUN_BODY
___END_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR
___BEGIN_SFUN_SCMOBJ_TO_CHARSTRING(___SFUN_RESULT,___result)
___SFUN_SET_RESULT
___END_SFUN_SCMOBJ_TO_CHARSTRING(___SFUN_RESULT,___result)
___END_SFUN
return ___result;
#undef ___NARGS
}


#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf)
___DEF_M_HLBL(___L1__20_intf)
___DEF_M_HLBL(___L2__20_intf)
___DEF_M_HLBL(___L3__20_intf)
___DEF_M_HLBL(___L4__20_intf)
___DEF_M_HLBL(___L5__20_intf)
___DEF_M_HLBL(___L6__20_intf)
___DEF_M_HLBL(___L7__20_intf)
___DEF_M_HLBL(___L8__20_intf)
___DEF_M_HLBL(___L9__20_intf)
___DEF_M_HLBL(___L10__20_intf)
___DEF_M_HLBL(___L11__20_intf)
___DEF_M_HLBL(___L12__20_intf)
___DEF_M_HLBL(___L13__20_intf)
___DEF_M_HLBL(___L14__20_intf)
___DEF_M_HLBL(___L15__20_intf)
___DEF_M_HLBL(___L16__20_intf)
___DEF_M_HLBL(___L17__20_intf)
___DEF_M_HLBL(___L18__20_intf)
___DEF_M_HLBL(___L19__20_intf)
___DEF_M_HLBL(___L20__20_intf)
___DEF_M_HLBL(___L21__20_intf)
___DEF_M_HLBL(___L22__20_intf)
___DEF_M_HLBL(___L23__20_intf)
___DEF_M_HLBL(___L24__20_intf)
___DEF_M_HLBL(___L25__20_intf)
___DEF_M_HLBL(___L26__20_intf)
___DEF_M_HLBL(___L27__20_intf)
___DEF_M_HLBL(___L28__20_intf)
___DEF_M_HLBL(___L29__20_intf)
___DEF_M_HLBL(___L30__20_intf)
___DEF_M_HLBL(___L31__20_intf)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_set_2d_cwd)
___DEF_M_HLBL(___L1_intf_23_set_2d_cwd)
___DEF_M_HLBL(___L2_intf_23_set_2d_cwd)
___DEF_M_HLBL(___L3_intf_23_set_2d_cwd)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_c_2d_start__repl__server)
___DEF_M_HLBL(___L1_intf_23_c_2d_start__repl__server)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_c_2d_setcwd)
___DEF_M_HLBL(___L1_intf_23_c_2d_setcwd)
___DEF_M_HLBL(___L2_intf_23_c_2d_setcwd)
___DEF_M_HLBL(___L3_intf_23_c_2d_setcwd)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_send_2d_input)
___DEF_M_HLBL(___L1_intf_23_send_2d_input)
___DEF_M_HLBL(___L2_intf_23_send_2d_input)
___DEF_M_HLBL(___L3_intf_23_send_2d_input)
___DEF_M_HLBL(___L4_intf_23_send_2d_input)
___DEF_M_HLBL(___L5_intf_23_send_2d_input)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_send_2d_event)
___DEF_M_HLBL(___L1_intf_23_send_2d_event)
___DEF_M_HLBL(___L2_intf_23_send_2d_event)
___DEF_M_HLBL(___L3_intf_23_send_2d_event)
___DEF_M_HLBL(___L4_intf_23_send_2d_event)
___DEF_M_HLBL(___L5_intf_23_send_2d_event)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_set_2d_webView_2d_content)
___DEF_M_HLBL(___L1_intf_23_set_2d_webView_2d_content)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_M_HLBL(___L1_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_M_HLBL(___L2_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_M_HLBL(___L3_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_M_HLBL(___L4_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_heartbeat)
___DEF_M_HLBL(___L1_intf_23_heartbeat)
___DEF_M_HLBL(___L2_intf_23_heartbeat)
___DEF_M_HLBL(___L3_intf_23_heartbeat)
___DEF_M_HLBL(___L4_intf_23_heartbeat)
___DEF_M_HLBL(___L5_intf_23_heartbeat)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_eval_2d_string)
___DEF_M_HLBL(___L1_intf_23_eval_2d_string)
___DEF_M_HLBL(___L2_intf_23_eval_2d_string)
___DEF_M_HLBL(___L3_intf_23_eval_2d_string)
___DEF_M_HLBL(___L4_intf_23_eval_2d_string)
___DEF_M_HLBL(___L5_intf_23_eval_2d_string)
___DEF_M_HLBL(___L6_intf_23_eval_2d_string)
___DEF_M_HLBL(___L7_intf_23_eval_2d_string)
___DEF_M_HLBL(___L8_intf_23_eval_2d_string)
___DEF_M_HLBL(___L9_intf_23_eval_2d_string)
___DEF_M_HLBL(___L10_intf_23_eval_2d_string)
___DEF_M_HLBL(___L11_intf_23_eval_2d_string)
___DEF_M_HLBL(___L12_intf_23_eval_2d_string)
___DEF_M_HLBL(___L13_intf_23_eval_2d_string)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_set_2d_event_2d_handler)
___DEF_M_HLBL(___L1_intf_23_set_2d_event_2d_handler)
___DEF_M_HLBL(___L2_intf_23_set_2d_event_2d_handler)
___DEF_M_HLBL(___L3_intf_23_set_2d_event_2d_handler)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_show_2d_view)
___DEF_M_HLBL(___L1_intf_23_show_2d_view)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_set_2d_view_2d_content)
___DEF_M_HLBL(___L1_intf_23_set_2d_view_2d_content)
___DEF_M_HLBL(___L2_intf_23_set_2d_view_2d_content)
___DEF_M_HLBL(___L3_intf_23_set_2d_view_2d_content)
___DEF_M_HLBL(___L4_intf_23_set_2d_view_2d_content)
___DEF_M_HLBL(___L5_intf_23_set_2d_view_2d_content)
___DEF_M_HLBL(___L6_intf_23_set_2d_view_2d_content)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L1_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L2_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L3_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L4_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L5_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L6_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L7_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L8_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L9_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L10_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L11_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL(___L12_intf_23_has_2d_prefix_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L1_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L2_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L3_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L4_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L5_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L6_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L7_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L8_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L9_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L10_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L11_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L12_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L13_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L14_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L15_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL(___L16_intf_23_get_2d_event_2d_parameters)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_contained_2d_path_2d_resolve)
___DEF_M_HLBL(___L1_intf_23_contained_2d_path_2d_resolve)
___DEF_M_HLBL(___L2_intf_23_contained_2d_path_2d_resolve)
___DEF_M_HLBL(___L3_intf_23_contained_2d_path_2d_resolve)
___DEF_M_HLBL(___L4_intf_23_contained_2d_path_2d_resolve)
___DEF_M_HLBL(___L5_intf_23_contained_2d_path_2d_resolve)
___DEF_M_HLBL(___L6_intf_23_contained_2d_path_2d_resolve)
___DEF_M_HLBL(___L7_intf_23_contained_2d_path_2d_resolve)
___DEF_M_HLBL(___L8_intf_23_contained_2d_path_2d_resolve)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_0)
___DEF_M_HLBL(___L1__20_intf_23_0)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_1)
___DEF_M_HLBL(___L1__20_intf_23_1)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_2)
___DEF_M_HLBL(___L1__20_intf_23_2)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_3)
___DEF_M_HLBL(___L1__20_intf_23_3)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_4)
___DEF_M_HLBL(___L1__20_intf_23_4)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_5)
___DEF_M_HLBL(___L1__20_intf_23_5)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_6)
___DEF_M_HLBL(___L1__20_intf_23_6)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_7)
___DEF_M_HLBL(___L1__20_intf_23_7)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_8)
___DEF_M_HLBL(___L1__20_intf_23_8)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_9)
___DEF_M_HLBL(___L1__20_intf_23_9)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_10)
___DEF_M_HLBL(___L1__20_intf_23_10)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_11)
___DEF_M_HLBL(___L1__20_intf_23_11)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_12)
___DEF_M_HLBL(___L1__20_intf_23_12)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_13)
___DEF_M_HLBL(___L1__20_intf_23_13)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_14)
___DEF_M_HLBL(___L1__20_intf_23_14)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_15)
___DEF_M_HLBL(___L1__20_intf_23_15)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_16)
___DEF_M_HLBL(___L1__20_intf_23_16)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_17)
___DEF_M_HLBL(___L1__20_intf_23_17)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_intf_23_18)
___DEF_M_HLBL(___L1__20_intf_23_18)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_intf_23_event_2d_handler)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf)
___DEF_P_HLBL(___L1__20_intf)
___DEF_P_HLBL(___L2__20_intf)
___DEF_P_HLBL(___L3__20_intf)
___DEF_P_HLBL(___L4__20_intf)
___DEF_P_HLBL(___L5__20_intf)
___DEF_P_HLBL(___L6__20_intf)
___DEF_P_HLBL(___L7__20_intf)
___DEF_P_HLBL(___L8__20_intf)
___DEF_P_HLBL(___L9__20_intf)
___DEF_P_HLBL(___L10__20_intf)
___DEF_P_HLBL(___L11__20_intf)
___DEF_P_HLBL(___L12__20_intf)
___DEF_P_HLBL(___L13__20_intf)
___DEF_P_HLBL(___L14__20_intf)
___DEF_P_HLBL(___L15__20_intf)
___DEF_P_HLBL(___L16__20_intf)
___DEF_P_HLBL(___L17__20_intf)
___DEF_P_HLBL(___L18__20_intf)
___DEF_P_HLBL(___L19__20_intf)
___DEF_P_HLBL(___L20__20_intf)
___DEF_P_HLBL(___L21__20_intf)
___DEF_P_HLBL(___L22__20_intf)
___DEF_P_HLBL(___L23__20_intf)
___DEF_P_HLBL(___L24__20_intf)
___DEF_P_HLBL(___L25__20_intf)
___DEF_P_HLBL(___L26__20_intf)
___DEF_P_HLBL(___L27__20_intf)
___DEF_P_HLBL(___L28__20_intf)
___DEF_P_HLBL(___L29__20_intf)
___DEF_P_HLBL(___L30__20_intf)
___DEF_P_HLBL(___L31__20_intf)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_intf)
   ___SET_GLO(24,___G_intf_23_CFBundleName,___SUB(0))
   ___SET_GLO(23,___G_intf_23_CFBundleDisplayName,___SUB(1))
   ___SET_GLO(28,___G_intf_23_alog,___PRC(150))
   ___SET_GLO(57,___G_intf_23_show_2d_ReplView,___PRC(153))
   ___SET_GLO(61,___G_intf_23_show_2d_webView,___PRC(156))
   ___SET_GLO(44,___G_intf_23_open_2d_URL,___PRC(165))
   ___SET_GLO(25,___G_intf_23_add_2d_expr,___PRC(168))
   ___SET_GLO(27,___G_intf_23_add_2d_output_2d_to_2d_textView,___PRC(171))
   ___SET_GLO(26,___G_intf_23_add_2d_input_2d_to_2d_textView,___PRC(174))
   ___SET_GLO(59,___G_intf_23_show_2d_textView,___PRC(177))
   ___SET_GLO(33,___G_intf_23_eval_2d_js_2d_in_2d_webView,___PRC(180))
   ___SET_GLO(38,___G_intf_23_get_2d_pasteboard,___PRC(183))
   ___SET_GLO(52,___G_intf_23_set_2d_navigation,___PRC(186))
   ___SET_GLO(58,___G_intf_23_show_2d_cancelButton,___PRC(189))
   ___SET_GLO(43,___G_intf_23_hide_2d_cancelButton,___PRC(192))
   ___SET_GLO(47,___G_intf_23_segm_2d_ctrl_2d_set_2d_title,___PRC(195))
   ___SET_GLO(45,___G_intf_23_popup_2d_alert,___PRC(198))
   ___SET_GLO(53,___G_intf_23_set_2d_pref,___PRC(201))
   ___SET_GLO(39,___G_intf_23_get_2d_pref,___PRC(204))
   ___SET_GLO(40,___G_intf_23_handle_2d_key,___FAL)
   ___SET_GLO(40,___G_intf_23_handle_2d_key,___LBL(30))
   ___SET_GLO(46,___G_intf_23_repl_2d_port,___FAL)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___LBL(28))
   ___SET_R2(___LBL(22))
   ___SET_R0(___LBL(2))
   ___SET_R1(___STK(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1__20_intf)
   ___JUMPGLOSAFE(___SET_NARGS(2),62,___G__23__23_call_2d_with_2d_values)
___DEF_SLBL(2,___L2__20_intf)
   ___SET_GLO(36,___G_intf_23_event_2d_port,___FAL)
   ___SET_GLO(35,___G_intf_23_event_2d_handler,___PRC(207))
   ___SET_STK(-2,___LBL(20))
   ___SET_R2(___LBL(8))
   ___SET_R0(___LBL(3))
   ___SET_R1(___STK(-2))
   ___JUMPGLOSAFE(___SET_NARGS(2),62,___G__23__23_call_2d_with_2d_values)
___DEF_SLBL(3,___L3__20_intf)
   ___SET_GLO(20,___G__23__23_exit,___LBL(6))
   ___SET_R1(___GLO_current_2d_directory)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(1),65,___G__23__23_path_2d_normalize)
___DEF_SLBL(4,___L4__20_intf)
   ___SET_GLO(29,___G_intf_23_app_2d_home_2d_dir,___R1)
   ___SET_GLO(21,___G__23__23_os_2d_path_2d_homedir,___GLO_current_2d_directory)
   ___SET_R1(___VOID)
   ___POLL(5)
___DEF_SLBL(5,___L5__20_intf)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(6,___L6__20_intf)
   ___IF_NARGS_EQ(0,___SET_R1(___FIX(0L)))
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(6,0,1,0)
   ___SET_R1(___SUB(2))
   ___POLL(7)
___DEF_SLBL(7,___L7__20_intf)
   ___JUMPGLOSAFE(___SET_NARGS(1),71,___G_error)
___DEF_SLBL(8,___L8__20_intf)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(8,2,0,0)
   ___SET_GLO(36,___G_intf_23_event_2d_port,___R2)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(2),13)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(2))
   ___SET_R0(___LBL(11))
   ___ADJFP(4)
   ___CHECK_HEAP(9,4096)
___DEF_SLBL(9,___L9__20_intf)
   ___POLL(10)
___DEF_SLBL(10,___L10__20_intf)
   ___JUMPGLOSAFE(___SET_NARGS(1),76,___G_make_2d_thread)
___DEF_SLBL(11,___L11__20_intf)
   ___SET_R0(___STK(-3))
   ___POLL(12)
___DEF_SLBL(12,___L12__20_intf)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(1),90,___G_thread_2d_start_21_)
___DEF_SLBL(13,___L13__20_intf)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(13,0,0,0)
   ___SET_R1(___CLO(___R4,1))
   ___POLL(14)
___DEF_SLBL(14,___L14__20_intf)
   ___GOTO(___L32__20_intf)
___DEF_SLBL(15,___L15__20_intf)
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(16)
___DEF_SLBL(16,___L16__20_intf)
___DEF_GLBL(___L32__20_intf)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(18))
   ___ADJFP(8)
   ___POLL(17)
___DEF_SLBL(17,___L17__20_intf)
   ___JUMPPRM(___SET_NARGS(1),___PRM_read)
___DEF_SLBL(18,___L18__20_intf)
   ___IF(___NOT(___EOFP(___R1)))
   ___GOTO(___L33__20_intf)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(19)
___DEF_SLBL(19,___L19__20_intf)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L33__20_intf)
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(1),35,___G_intf_23_event_2d_handler)
___DEF_SLBL(20,___L20__20_intf)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(20,0,0,0)
   ___SET_R1(___CNS(0))
   ___POLL(21)
___DEF_SLBL(21,___L21__20_intf)
   ___JUMPGLOSAFE(___SET_NARGS(1),79,___G_open_2d_vector_2d_pipe)
___DEF_SLBL(22,___L22__20_intf)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(22,2,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R3(___LBL(27))
   ___SET_R2(___FIX(4L))
   ___SET_R0(___LBL(24))
   ___ADJFP(8)
   ___POLL(23)
___DEF_SLBL(23,___L23__20_intf)
   ___JUMPPRM(___SET_NARGS(3),___PRM__23__23_vector_2d_set_21_)
___DEF_SLBL(24,___L24__20_intf)
   ___SET_R2(___STK(-6))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(25))
   ___JUMPGLOSAFE(___SET_NARGS(2),63,___G__23__23_make_2d_repl_2d_channel_2d_ports)
___DEF_SLBL(25,___L25__20_intf)
   ___SET_GLO(22,___G__23__23_stdio_2f_console_2d_repl_2d_channel,___R1)
   ___SET_GLO(46,___G_intf_23_repl_2d_port,___STK(-5))
   ___SET_R1(___STK(-5))
   ___SET_R2(___SUB(3))
   ___SET_R0(___STK(-7))
   ___POLL(26)
___DEF_SLBL(26,___L26__20_intf)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(2),75,___G_input_2d_port_2d_timeout_2d_set_21_)
___DEF_SLBL(27,___L27__20_intf)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(27,1,0,0)
   ___SET_R1(___CNS(2))
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(28,___L28__20_intf)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(28,0,0,0)
   ___POLL(29)
___DEF_SLBL(29,___L29__20_intf)
   ___JUMPGLOSAFE(___SET_NARGS(0),78,___G_open_2d_string_2d_pipe)
___DEF_SLBL(30,___L30__20_intf)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(30,1,0,0)
   ___SET_R2(___R1)
   ___SET_R1(___FIX(0L))
   ___POLL(31)
___DEF_SLBL(31,___L31__20_intf)
   ___JUMPINT(___SET_NARGS(2),___PRC(174),___L__20_intf_23_8)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_set_2d_cwd
#undef ___PH_LBL0
#define ___PH_LBL0 34
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_set_2d_cwd)
___DEF_P_HLBL(___L1_intf_23_set_2d_cwd)
___DEF_P_HLBL(___L2_intf_23_set_2d_cwd)
___DEF_P_HLBL(___L3_intf_23_set_2d_cwd)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_set_2d_cwd)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_set_2d_cwd)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_set_2d_cwd)
   ___JUMPGLOSAFE(___SET_NARGS(1),69,___G_current_2d_directory)
___DEF_SLBL(2,___L2_intf_23_set_2d_cwd)
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_intf_23_set_2d_cwd)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_c_2d_start__repl__server
#undef ___PH_LBL0
#define ___PH_LBL0 39
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_c_2d_start__repl__server)
___DEF_P_HLBL(___L1_intf_23_c_2d_start__repl__server)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_c_2d_start__repl__server)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_c_2d_start__repl__server)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_c_2d_start__repl__server)
   ___JUMPGLOSAFE(___SET_NARGS(1),86,___G_repl_2d_server_23_repl_2d_server_2d_start)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_c_2d_setcwd
#undef ___PH_LBL0
#define ___PH_LBL0 42
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_c_2d_setcwd)
___DEF_P_HLBL(___L1_intf_23_c_2d_setcwd)
___DEF_P_HLBL(___L2_intf_23_c_2d_setcwd)
___DEF_P_HLBL(___L3_intf_23_c_2d_setcwd)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_c_2d_setcwd)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_c_2d_setcwd)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_c_2d_setcwd)
   ___JUMPGLOSAFE(___SET_NARGS(1),69,___G_current_2d_directory)
___DEF_SLBL(2,___L2_intf_23_c_2d_setcwd)
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_intf_23_c_2d_setcwd)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_send_2d_input
#undef ___PH_LBL0
#define ___PH_LBL0 47
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_send_2d_input)
___DEF_P_HLBL(___L1_intf_23_send_2d_input)
___DEF_P_HLBL(___L2_intf_23_send_2d_input)
___DEF_P_HLBL(___L3_intf_23_send_2d_input)
___DEF_P_HLBL(___L4_intf_23_send_2d_input)
___DEF_P_HLBL(___L5_intf_23_send_2d_input)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_send_2d_input)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_send_2d_input)
   ___SET_STK(1,___GLO_intf_23_repl_2d_port)
   ___SET_STK(2,___R0)
   ___SET_STK(3,___R1)
   ___SET_R1(___STK(1))
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_send_2d_input)
   ___JUMPGLOSAFE(___SET_NARGS(1),81,___G_port_3f_)
___DEF_SLBL(2,___L2_intf_23_send_2d_input)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L6_intf_23_send_2d_input)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_intf_23_send_2d_input)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_GLBL(___L6_intf_23_send_2d_input)
   ___SET_R2(___STK(-7))
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(2),___PRM_display)
___DEF_SLBL(4,___L4_intf_23_send_2d_input)
   ___SET_R1(___STK(-7))
   ___SET_R0(___STK(-6))
   ___POLL(5)
___DEF_SLBL(5,___L5_intf_23_send_2d_input)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(1),73,___G_force_2d_output)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_send_2d_event
#undef ___PH_LBL0
#define ___PH_LBL0 54
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_send_2d_event)
___DEF_P_HLBL(___L1_intf_23_send_2d_event)
___DEF_P_HLBL(___L2_intf_23_send_2d_event)
___DEF_P_HLBL(___L3_intf_23_send_2d_event)
___DEF_P_HLBL(___L4_intf_23_send_2d_event)
___DEF_P_HLBL(___L5_intf_23_send_2d_event)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_send_2d_event)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_send_2d_event)
   ___SET_STK(1,___GLO_intf_23_event_2d_port)
   ___SET_STK(2,___R0)
   ___SET_STK(3,___R1)
   ___SET_R1(___STK(1))
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_send_2d_event)
   ___JUMPGLOSAFE(___SET_NARGS(1),81,___G_port_3f_)
___DEF_SLBL(2,___L2_intf_23_send_2d_event)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L6_intf_23_send_2d_event)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_intf_23_send_2d_event)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___DEF_GLBL(___L6_intf_23_send_2d_event)
   ___SET_R2(___STK(-7))
   ___SET_R1(___STK(-5))
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(2),___PRM_write)
___DEF_SLBL(4,___L4_intf_23_send_2d_event)
   ___SET_R1(___STK(-7))
   ___SET_R0(___STK(-6))
   ___POLL(5)
___DEF_SLBL(5,___L5_intf_23_send_2d_event)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(1),73,___G_force_2d_output)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_set_2d_webView_2d_content
#undef ___PH_LBL0
#define ___PH_LBL0 61
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_set_2d_webView_2d_content)
___DEF_P_HLBL(___L1_intf_23_set_2d_webView_2d_content)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_set_2d_webView_2d_content)
   ___IF_NARGS_EQ(2,___PUSH(___R1) ___PUSH(___R2) ___SET_R1(___FAL) ___SET_R2(___FAL) ___SET_R3(
___SUB(4)))
   ___IF_NARGS_EQ(3,___PUSH(___R1) ___PUSH(___R2) ___SET_R1(___R3) ___SET_R2(___FAL) ___SET_R3(
___SUB(4)))
   ___IF_NARGS_EQ(4,___PUSH(___R1) ___SET_R1(___R2) ___SET_R2(___R3) ___SET_R3(___SUB(4)
))
   ___IF_NARGS_EQ(5,___NOTHING)
   ___WRONG_NARGS(0,2,3,0)
___DEF_GLBL(___L_intf_23_set_2d_webView_2d_content)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_set_2d_webView_2d_content)
   ___JUMPINT(___SET_NARGS(5),___PRC(159),___L__20_intf_23_3)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_set_2d_webView_2d_content_2d_from_2d_file
#undef ___PH_LBL0
#define ___PH_LBL0 64
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_P_HLBL(___L1_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_P_HLBL(___L2_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_P_HLBL(___L3_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_P_HLBL(___L4_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
   ___IF_NARGS_EQ(2,___PUSH(___R1) ___PUSH(___R2) ___SET_R1(___ABSENT) ___SET_R2(___FAL) ___SET_R3(
___SUB(5)))
   ___IF_NARGS_EQ(3,___PUSH(___R1) ___PUSH(___R2) ___SET_R1(___R3) ___SET_R2(___FAL) ___SET_R3(
___SUB(5)))
   ___IF_NARGS_EQ(4,___PUSH(___R1) ___SET_R1(___R2) ___SET_R2(___R3) ___SET_R3(___SUB(5)
))
   ___IF_NARGS_EQ(5,___NOTHING)
   ___WRONG_NARGS(0,2,3,0)
___DEF_GLBL(___L_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
   ___IF(___NOT(___EQP(___R1,___ABSENT)))
   ___GOTO(___L5_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_R1(___STK(0))
   ___SET_R0(___LBL(2))
   ___ADJFP(6)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
   ___JUMPGLOSAFE(___SET_NARGS(1),80,___G_path_2d_directory)
___DEF_SLBL(2,___L2_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
   ___SET_R3(___STK(-3))
   ___SET_R2(___STK(-4))
   ___SET_R0(___STK(-5))
   ___ADJFP(-6)
   ___POLL(3)
___DEF_SLBL(3,___L3_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
   ___GOTO(___L6_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_GLBL(___L5_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
   ___POLL(4)
___DEF_SLBL(4,___L4_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
___DEF_GLBL(___L6_intf_23_set_2d_webView_2d_content_2d_from_2d_file)
   ___JUMPINT(___SET_NARGS(5),___PRC(162),___L__20_intf_23_4)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_heartbeat
#undef ___PH_LBL0
#define ___PH_LBL0 70
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_heartbeat)
___DEF_P_HLBL(___L1_intf_23_heartbeat)
___DEF_P_HLBL(___L2_intf_23_heartbeat)
___DEF_P_HLBL(___L3_intf_23_heartbeat)
___DEF_P_HLBL(___L4_intf_23_heartbeat)
___DEF_P_HLBL(___L5_intf_23_heartbeat)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_heartbeat)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_intf_23_heartbeat)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_heartbeat)
   ___JUMPGLOSAFE(___SET_NARGS(0),66,___G__23__23_thread_2d_heartbeat_21_)
___DEF_SLBL(2,___L2_intf_23_heartbeat)
   ___SET_R2(___FAL)
   ___SET_R1(___GLO_intf_23_repl_2d_port)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),85,___G_read_2d_line)
___DEF_SLBL(3,___L3_intf_23_heartbeat)
   ___IF(___NOT(___STRINGP(___R1)))
   ___GOTO(___L6_intf_23_heartbeat)
   ___END_IF
   ___SET_R2(___R1)
   ___SET_R1(___FIX(0L))
   ___SET_R0(___STK(-3))
   ___POLL(4)
___DEF_SLBL(4,___L4_intf_23_heartbeat)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(2),___PRC(171),___L__20_intf_23_7)
___DEF_GLBL(___L6_intf_23_heartbeat)
   ___SET_R1(___VOID)
   ___POLL(5)
___DEF_SLBL(5,___L5_intf_23_heartbeat)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_eval_2d_string
#undef ___PH_LBL0
#define ___PH_LBL0 77
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_eval_2d_string)
___DEF_P_HLBL(___L1_intf_23_eval_2d_string)
___DEF_P_HLBL(___L2_intf_23_eval_2d_string)
___DEF_P_HLBL(___L3_intf_23_eval_2d_string)
___DEF_P_HLBL(___L4_intf_23_eval_2d_string)
___DEF_P_HLBL(___L5_intf_23_eval_2d_string)
___DEF_P_HLBL(___L6_intf_23_eval_2d_string)
___DEF_P_HLBL(___L7_intf_23_eval_2d_string)
___DEF_P_HLBL(___L8_intf_23_eval_2d_string)
___DEF_P_HLBL(___L9_intf_23_eval_2d_string)
___DEF_P_HLBL(___L10_intf_23_eval_2d_string)
___DEF_P_HLBL(___L11_intf_23_eval_2d_string)
___DEF_P_HLBL(___L12_intf_23_eval_2d_string)
___DEF_P_HLBL(___L13_intf_23_eval_2d_string)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_eval_2d_string)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_eval_2d_string)
   ___SET_STK(1,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(1),8)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___LBL(3))
   ___SET_R2(___STK(1))
   ___ADJFP(1)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_intf_23_eval_2d_string)
   ___POLL(2)
___DEF_SLBL(2,___L2_intf_23_eval_2d_string)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(2),92,___G_with_2d_exception_2d_catcher)
___DEF_SLBL(3,___L3_intf_23_eval_2d_string)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(3,1,0,0)
   ___SET_STK(1,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(1),6)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(1))
   ___SET_R1(___SUB(6))
   ___ADJFP(1)
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_intf_23_eval_2d_string)
   ___POLL(5)
___DEF_SLBL(5,___L5_intf_23_eval_2d_string)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(2),94,___G_with_2d_output_2d_to_2d_string)
___DEF_SLBL(6,___L6_intf_23_eval_2d_string)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(6,0,0,0)
   ___SET_R1(___CLO(___R4,1))
   ___POLL(7)
___DEF_SLBL(7,___L7_intf_23_eval_2d_string)
   ___JUMPPRM(___SET_NARGS(1),___PRM_write)
___DEF_SLBL(8,___L8_intf_23_eval_2d_string)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(8,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___CLO(___R4,1))
   ___SET_R1(___STK(2))
   ___SET_R2(___PRM_read)
   ___SET_R0(___LBL(10))
   ___ADJFP(4)
   ___POLL(9)
___DEF_SLBL(9,___L9_intf_23_eval_2d_string)
   ___JUMPGLOSAFE(___SET_NARGS(2),93,___G_with_2d_input_2d_from_2d_string)
___DEF_SLBL(10,___L10_intf_23_eval_2d_string)
   ___SET_R0(___LBL(11))
   ___JUMPPRM(___SET_NARGS(1),___PRM_eval)
___DEF_SLBL(11,___L11_intf_23_eval_2d_string)
   ___SET_STK(-2,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(-2),6)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(-2))
   ___SET_R1(___SUB(6))
   ___SET_R0(___STK(-3))
   ___ADJFP(-2)
   ___CHECK_HEAP(12,4096)
___DEF_SLBL(12,___L12_intf_23_eval_2d_string)
   ___POLL(13)
___DEF_SLBL(13,___L13_intf_23_eval_2d_string)
   ___ADJFP(-2)
   ___JUMPGLOSAFE(___SET_NARGS(2),94,___G_with_2d_output_2d_to_2d_string)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_set_2d_event_2d_handler
#undef ___PH_LBL0
#define ___PH_LBL0 92
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_set_2d_event_2d_handler)
___DEF_P_HLBL(___L1_intf_23_set_2d_event_2d_handler)
___DEF_P_HLBL(___L2_intf_23_set_2d_event_2d_handler)
___DEF_P_HLBL(___L3_intf_23_set_2d_event_2d_handler)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_set_2d_event_2d_handler)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_set_2d_event_2d_handler)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___GLO_intf_23_event_2d_handler)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_set_2d_event_2d_handler)
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-2))
___DEF_SLBL(2,___L2_intf_23_set_2d_event_2d_handler)
   ___SET_GLO(35,___G_intf_23_event_2d_handler,___R1)
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3_intf_23_set_2d_event_2d_handler)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_show_2d_view
#undef ___PH_LBL0
#define ___PH_LBL0 97
#undef ___PD_ALL
#define ___PD_ALL ___D_FP
#undef ___PR_ALL
#define ___PR_ALL ___R_FP
#undef ___PW_ALL
#define ___PW_ALL
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_show_2d_view)
___DEF_P_HLBL(___L1_intf_23_show_2d_view)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_show_2d_view)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_show_2d_view)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_show_2d_view)
   ___JUMPINT(___SET_NARGS(1),___PRC(156),___L__20_intf_23_2)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_set_2d_view_2d_content
#undef ___PH_LBL0
#define ___PH_LBL0 100
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_set_2d_view_2d_content)
___DEF_P_HLBL(___L1_intf_23_set_2d_view_2d_content)
___DEF_P_HLBL(___L2_intf_23_set_2d_view_2d_content)
___DEF_P_HLBL(___L3_intf_23_set_2d_view_2d_content)
___DEF_P_HLBL(___L4_intf_23_set_2d_view_2d_content)
___DEF_P_HLBL(___L5_intf_23_set_2d_view_2d_content)
___DEF_P_HLBL(___L6_intf_23_set_2d_view_2d_content)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_set_2d_view_2d_content)
   ___IF_NARGS_EQ(2,___PUSH(___R1) ___PUSH(___R2) ___SET_R1(___FAL) ___SET_R2(___FAL) ___SET_R3(
___SUB(7)))
   ___IF_NARGS_EQ(3,___PUSH(___R1) ___PUSH(___R2) ___SET_R1(___R3) ___SET_R2(___FAL) ___SET_R3(
___SUB(7)))
   ___IF_NARGS_EQ(4,___PUSH(___R1) ___SET_R1(___R2) ___SET_R2(___R3) ___SET_R3(___SUB(7)
))
   ___IF_NARGS_EQ(5,___NOTHING)
   ___WRONG_NARGS(0,2,3,0)
___DEF_GLBL(___L_intf_23_set_2d_view_2d_content)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(5),5)
   ___ADD_CLO_ELEM(0,___STK(0))
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(5))
   ___SET_R1(___SUB(8))
   ___SET_R0(___LBL(3))
   ___ADJFP(10)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_intf_23_set_2d_view_2d_content)
   ___POLL(2)
___DEF_SLBL(2,___L2_intf_23_set_2d_view_2d_content)
   ___JUMPGLOSAFE(___SET_NARGS(2),94,___G_with_2d_output_2d_to_2d_string)
___DEF_SLBL(3,___L3_intf_23_set_2d_view_2d_content)
   ___SET_STK(-10,___R1)
   ___SET_R3(___STK(-6))
   ___SET_R2(___STK(-7))
   ___SET_R1(___STK(-8))
   ___SET_R0(___STK(-9))
   ___POLL(4)
___DEF_SLBL(4,___L4_intf_23_set_2d_view_2d_content)
   ___ADJFP(-10)
   ___JUMPINT(___SET_NARGS(5),___PRC(159),___L__20_intf_23_3)
___DEF_SLBL(5,___L5_intf_23_set_2d_view_2d_content)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(5,0,0,0)
   ___SET_R1(___CLO(___R4,1))
   ___POLL(6)
___DEF_SLBL(6,___L6_intf_23_set_2d_view_2d_content)
   ___JUMPGLOSAFE(___SET_NARGS(1),82,___G_print)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_has_2d_prefix_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 108
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L1_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L2_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L3_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L4_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L5_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L6_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L7_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L8_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L9_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L10_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L11_intf_23_has_2d_prefix_3f_)
___DEF_P_HLBL(___L12_intf_23_has_2d_prefix_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_has_2d_prefix_3f_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_intf_23_has_2d_prefix_3f_)
   ___IF(___NOT(___STRINGP(___R1)))
   ___GOTO(___L21_intf_23_has_2d_prefix_3f_)
   ___END_IF
   ___IF(___NOT(___STRINGP(___R2)))
   ___GOTO(___L21_intf_23_has_2d_prefix_3f_)
   ___END_IF
   ___IF(___NOT(___STRINGP(___R1)))
   ___GOTO(___L20_intf_23_has_2d_prefix_3f_)
   ___END_IF
   ___SET_R3(___STRINGLENGTH(___R1))
   ___IF(___STRINGP(___R2))
   ___GOTO(___L13_intf_23_has_2d_prefix_3f_)
   ___END_IF
   ___GOTO(___L19_intf_23_has_2d_prefix_3f_)
___DEF_SLBL(1,___L1_intf_23_has_2d_prefix_3f_)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___IF(___NOT(___STRINGP(___R2)))
   ___GOTO(___L19_intf_23_has_2d_prefix_3f_)
   ___END_IF
___DEF_GLBL(___L13_intf_23_has_2d_prefix_3f_)
   ___SET_R4(___STRINGLENGTH(___R2))
   ___IF(___NOT(___FIXNUMP(___R4)))
   ___GOTO(___L18_intf_23_has_2d_prefix_3f_)
   ___END_IF
___DEF_GLBL(___L14_intf_23_has_2d_prefix_3f_)
   ___IF(___NOT(___FIXNUMP(___R3)))
   ___GOTO(___L18_intf_23_has_2d_prefix_3f_)
   ___END_IF
   ___SET_STK(1,___BOOLEAN(___FIXGE(___R3,___R4)))
   ___SET_STK(2,___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(2)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L16_intf_23_has_2d_prefix_3f_)
   ___END_IF
___DEF_GLBL(___L15_intf_23_has_2d_prefix_3f_)
   ___POLL(2)
___DEF_SLBL(2,___L2_intf_23_has_2d_prefix_3f_)
   ___ADJFP(-2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(3,___L3_intf_23_has_2d_prefix_3f_)
   ___SET_R4(___STK(-3))
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R0(___STK(-7))
   ___ADJFP(-6)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L15_intf_23_has_2d_prefix_3f_)
   ___END_IF
___DEF_GLBL(___L16_intf_23_has_2d_prefix_3f_)
   ___SET_STK(-1,___R0)
   ___SET_STK(1,___R3)
   ___SET_STK(2,___R4)
   ___SET_STK(3,___R2)
   ___SET_R3(___R4)
   ___SET_R1(___STK(0))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(5))
   ___ADJFP(6)
   ___POLL(4)
___DEF_SLBL(4,___L4_intf_23_has_2d_prefix_3f_)
   ___JUMPPRM(___SET_NARGS(3),___PRM_substring)
___DEF_SLBL(5,___L5_intf_23_has_2d_prefix_3f_)
   ___SET_R2(___STK(-3))
   ___SET_R0(___LBL(6))
   ___JUMPPRM(___SET_NARGS(2),___PRM_string_3d__3f_)
___DEF_SLBL(6,___L6_intf_23_has_2d_prefix_3f_)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L17_intf_23_has_2d_prefix_3f_)
   ___END_IF
   ___SET_R1(___FAL)
   ___POLL(7)
___DEF_SLBL(7,___L7_intf_23_has_2d_prefix_3f_)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L17_intf_23_has_2d_prefix_3f_)
   ___SET_R3(___STK(-5))
   ___SET_R2(___STK(-4))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(8)
___DEF_SLBL(8,___L8_intf_23_has_2d_prefix_3f_)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(3),___PRM_substring)
___DEF_SLBL(9,___L9_intf_23_has_2d_prefix_3f_)
   ___SET_R4(___R1)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___IF(___FIXNUMP(___R4))
   ___GOTO(___L14_intf_23_has_2d_prefix_3f_)
   ___END_IF
___DEF_GLBL(___L18_intf_23_has_2d_prefix_3f_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R2(___R4)
   ___SET_R1(___R3)
   ___SET_R0(___LBL(3))
   ___ADJFP(8)
   ___POLL(10)
___DEF_SLBL(10,___L10_intf_23_has_2d_prefix_3f_)
   ___JUMPPRM(___SET_NARGS(2),___PRM_fx_3e__3d_)
___DEF_GLBL(___L19_intf_23_has_2d_prefix_3f_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(9))
   ___ADJFP(8)
   ___POLL(11)
___DEF_SLBL(11,___L11_intf_23_has_2d_prefix_3f_)
   ___JUMPPRM(___SET_NARGS(1),___PRM_string_2d_length)
___DEF_GLBL(___L20_intf_23_has_2d_prefix_3f_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
   ___POLL(12)
___DEF_SLBL(12,___L12_intf_23_has_2d_prefix_3f_)
   ___JUMPPRM(___SET_NARGS(1),___PRM_string_2d_length)
___DEF_GLBL(___L21_intf_23_has_2d_prefix_3f_)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_get_2d_event_2d_parameters
#undef ___PH_LBL0
#define ___PH_LBL0 122
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L1_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L2_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L3_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L4_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L5_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L6_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L7_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L8_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L9_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L10_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L11_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L12_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L13_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L14_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L15_intf_23_get_2d_event_2d_parameters)
___DEF_P_HLBL(___L16_intf_23_get_2d_event_2d_parameters)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_get_2d_event_2d_parameters)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_get_2d_event_2d_parameters)
   ___SET_R2(___LBL(2))
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_get_2d_event_2d_parameters)
   ___JUMPGLOSAFE(___SET_NARGS(2),68,___G_call_2d_with_2d_input_2d_string)
___DEF_SLBL(2,___L2_intf_23_get_2d_event_2d_parameters)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(2,1,0,0)
   ___SET_STK(1,___GLO_url_23_url_2d_decode)
   ___SET_STK(2,___R0)
   ___SET_R2(___LBL(15))
   ___SET_R0(___LBL(4))
   ___ADJFP(8)
   ___POLL(3)
___DEF_SLBL(3,___L3_intf_23_get_2d_event_2d_parameters)
   ___JUMPGLOSAFE(___SET_NARGS(2),84,___G_read_2d_all)
___DEF_SLBL(4,___L4_intf_23_get_2d_event_2d_parameters)
   ___IF(___NOT(___PROCEDUREP(___STK(-7))))
   ___GOTO(___L22_intf_23_get_2d_event_2d_parameters)
   ___END_IF
   ___SET_R2(___STK(-7))
   ___SET_R3(___R1)
   ___SET_R0(___STK(-6))
   ___ADJFP(-8)
   ___POLL(5)
___DEF_SLBL(5,___L5_intf_23_get_2d_event_2d_parameters)
   ___GOTO(___L18_intf_23_get_2d_event_2d_parameters)
___DEF_GLBL(___L17_intf_23_get_2d_event_2d_parameters)
   ___SET_R3(___CDR(___R3))
   ___POLL(6)
___DEF_SLBL(6,___L6_intf_23_get_2d_event_2d_parameters)
___DEF_GLBL(___L18_intf_23_get_2d_event_2d_parameters)
   ___IF(___PAIRP(___R3))
   ___GOTO(___L17_intf_23_get_2d_event_2d_parameters)
   ___END_IF
   ___IF(___NOT(___NULLP(___R3)))
   ___GOTO(___L21_intf_23_get_2d_event_2d_parameters)
   ___END_IF
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___POLL(7)
___DEF_SLBL(7,___L7_intf_23_get_2d_event_2d_parameters)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L20_intf_23_get_2d_event_2d_parameters)
   ___END_IF
___DEF_GLBL(___L19_intf_23_get_2d_event_2d_parameters)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___CAR(___R2))
   ___SET_R0(___LBL(9))
   ___ADJFP(8)
   ___POLL(8)
___DEF_SLBL(8,___L8_intf_23_get_2d_event_2d_parameters)
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(9,___L9_intf_23_get_2d_event_2d_parameters)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(10))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L19_intf_23_get_2d_event_2d_parameters)
   ___END_IF
___DEF_GLBL(___L20_intf_23_get_2d_event_2d_parameters)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(10,___L10_intf_23_get_2d_event_2d_parameters)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_intf_23_get_2d_event_2d_parameters)
   ___POLL(12)
___DEF_SLBL(12,___L12_intf_23_get_2d_event_2d_parameters)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L21_intf_23_get_2d_event_2d_parameters)
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(1)
   ___POLL(13)
___DEF_SLBL(13,___L13_intf_23_get_2d_event_2d_parameters)
   ___ADJFP(-1)
   ___JUMPPRM(___SET_NARGS(2),___PRM_map)
___DEF_GLBL(___L22_intf_23_get_2d_event_2d_parameters)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-7))
   ___SET_R0(___STK(-6))
   ___POLL(14)
___DEF_SLBL(14,___L14_intf_23_get_2d_event_2d_parameters)
   ___ADJFP(-8)
   ___JUMPPRM(___SET_NARGS(2),___PRM_map)
___DEF_SLBL(15,___L15_intf_23_get_2d_event_2d_parameters)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(15,1,0,0)
   ___SET_R2(___CHR(58))
   ___POLL(16)
___DEF_SLBL(16,___L16_intf_23_get_2d_event_2d_parameters)
   ___JUMPGLOSAFE(___SET_NARGS(2),85,___G_read_2d_line)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_contained_2d_path_2d_resolve
#undef ___PH_LBL0
#define ___PH_LBL0 140
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_contained_2d_path_2d_resolve)
___DEF_P_HLBL(___L1_intf_23_contained_2d_path_2d_resolve)
___DEF_P_HLBL(___L2_intf_23_contained_2d_path_2d_resolve)
___DEF_P_HLBL(___L3_intf_23_contained_2d_path_2d_resolve)
___DEF_P_HLBL(___L4_intf_23_contained_2d_path_2d_resolve)
___DEF_P_HLBL(___L5_intf_23_contained_2d_path_2d_resolve)
___DEF_P_HLBL(___L6_intf_23_contained_2d_path_2d_resolve)
___DEF_P_HLBL(___L7_intf_23_contained_2d_path_2d_resolve)
___DEF_P_HLBL(___L8_intf_23_contained_2d_path_2d_resolve)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_contained_2d_path_2d_resolve)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_contained_2d_path_2d_resolve)
   ___POLL(1)
___DEF_SLBL(1,___L1_intf_23_contained_2d_path_2d_resolve)
   ___GOTO(___L9_intf_23_contained_2d_path_2d_resolve)
___DEF_SLBL(2,___L2_intf_23_contained_2d_path_2d_resolve)
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(3)
___DEF_SLBL(3,___L3_intf_23_contained_2d_path_2d_resolve)
___DEF_GLBL(___L9_intf_23_contained_2d_path_2d_resolve)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(5))
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_intf_23_contained_2d_path_2d_resolve)
   ___JUMPGLOSAFE(___SET_NARGS(1),64,___G__23__23_path_2d_expand)
___DEF_SLBL(5,___L5_intf_23_contained_2d_path_2d_resolve)
   ___SET_STK(-5,___R1)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(1),65,___G__23__23_path_2d_normalize)
___DEF_SLBL(6,___L6_intf_23_contained_2d_path_2d_resolve)
   ___SET_R2(___GLO_intf_23_app_2d_home_2d_dir)
   ___SET_R0(___LBL(7))
   ___JUMPINT(___SET_NARGS(2),___PRC(108),___L_intf_23_has_2d_prefix_3f_)
___DEF_SLBL(7,___L7_intf_23_contained_2d_path_2d_resolve)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L10_intf_23_contained_2d_path_2d_resolve)
   ___END_IF
   ___SET_R1(___STK(-5))
   ___POLL(8)
___DEF_SLBL(8,___L8_intf_23_contained_2d_path_2d_resolve)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L10_intf_23_contained_2d_path_2d_resolve)
   ___SET_R1(___SUB(9))
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(1),71,___G_error)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_0
#undef ___PH_LBL0
#define ___PH_LBL0 150
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_0)
___DEF_P_HLBL(___L1__20_intf_23_0)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_0)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L__20_intf_23_0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 1
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,char* ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(alog(___arg1))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_0)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_1
#undef ___PH_LBL0
#define ___PH_LBL0 153
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_1)
___DEF_P_HLBL(___L1__20_intf_23_1)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_1)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_intf_23_1)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN_VOID
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(java_show_ReplView())
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_1)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_2
#undef ___PH_LBL0
#define ___PH_LBL0 156
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_2)
___DEF_P_HLBL(___L1__20_intf_23_2)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_2)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L__20_intf_23_2)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 1
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(java_show_webView(___arg1))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_2)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_3
#undef ___PH_LBL0
#define ___PH_LBL0 159
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_3)
___DEF_P_HLBL(___L1__20_intf_23_3)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_3)
   ___IF_NARGS_EQ(5,___NOTHING)
   ___WRONG_NARGS(0,5,0,0)
___DEF_GLBL(___L__20_intf_23_3)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(10)
#define ___NARGS 5
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,char* ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,char* ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
#define ___ARG4 ___CFUN_ARG(4)
___BEGIN_CFUN_ARG(4,___BOOL ___arg4)
___BEGIN_CFUN_SCMOBJ_TO_BOOL(___ARG4,___arg4,4)
#define ___ARG5 ___CFUN_ARG(5)
___BEGIN_CFUN_ARG(5,char* ___arg5)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG5,___arg5,5)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(java_set_webView_content(___arg1,___arg2,___arg3,___arg4,___arg5))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG5,___arg5,5)
___END_CFUN_ARG(5)
#undef ___ARG5
___END_CFUN_SCMOBJ_TO_BOOL(___ARG4,___arg4,4)
___END_CFUN_ARG(4)
#undef ___ARG4
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_3)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(6))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_4
#undef ___PH_LBL0
#define ___PH_LBL0 162
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_4)
___DEF_P_HLBL(___L1__20_intf_23_4)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_4)
   ___IF_NARGS_EQ(5,___NOTHING)
   ___WRONG_NARGS(0,5,0,0)
___DEF_GLBL(___L__20_intf_23_4)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(10)
#define ___NARGS 5
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,char* ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,char* ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
#define ___ARG4 ___CFUN_ARG(4)
___BEGIN_CFUN_ARG(4,___BOOL ___arg4)
___BEGIN_CFUN_SCMOBJ_TO_BOOL(___ARG4,___arg4,4)
#define ___ARG5 ___CFUN_ARG(5)
___BEGIN_CFUN_ARG(5,char* ___arg5)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG5,___arg5,5)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(java_set_webView_content_from_file(___arg1,___arg2,___arg3,___arg4,___arg5))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG5,___arg5,5)
___END_CFUN_ARG(5)
#undef ___ARG5
___END_CFUN_SCMOBJ_TO_BOOL(___ARG4,___arg4,4)
___END_CFUN_ARG(4)
#undef ___ARG4
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_4)
   ___ADJFP(-12)
   ___JUMPPRM(___NOTHING,___STK(6))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_5
#undef ___PH_LBL0
#define ___PH_LBL0 165
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_5)
___DEF_P_HLBL(___L1__20_intf_23_5)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_5)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L__20_intf_23_5)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 1
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,char* ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(java_open_URL(___arg1))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_5)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_6
#undef ___PH_LBL0
#define ___PH_LBL0 168
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_6)
___DEF_P_HLBL(___L1__20_intf_23_6)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_6)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L__20_intf_23_6)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 1
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,char* ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(java_add_expr(___arg1))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_6)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_7
#undef ___PH_LBL0
#define ___PH_LBL0 171
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_7)
___DEF_P_HLBL(___L1__20_intf_23_7)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_7)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L__20_intf_23_7)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,char* ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(java_add_output_to_textview(___arg1,___arg2))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_7)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_8
#undef ___PH_LBL0
#define ___PH_LBL0 174
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_8)
___DEF_P_HLBL(___L1__20_intf_23_8)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_8)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L__20_intf_23_8)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,char* ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(java_add_input_to_textview(___arg1,___arg2))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_8)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_9
#undef ___PH_LBL0
#define ___PH_LBL0 177
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_9)
___DEF_P_HLBL(___L1__20_intf_23_9)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_9)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L__20_intf_23_9)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 1
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(java_show_textView(___arg1))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_9)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_10
#undef ___PH_LBL0
#define ___PH_LBL0 180
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_10)
___DEF_P_HLBL(___L1__20_intf_23_10)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_10)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L__20_intf_23_10)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN(char* ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,char* ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL(___result,java_eval_js_in_webView(___arg1,___arg2))
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_10)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_11
#undef ___PH_LBL0
#define ___PH_LBL0 183
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_11)
___DEF_P_HLBL(___L1__20_intf_23_11)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_11)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_intf_23_11)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN(char* ___result)
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL(___result,java_get_pasteboard())
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY
___CFUN_ERROR
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_11)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_12
#undef ___PH_LBL0
#define ___PH_LBL0 186
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_12)
___DEF_P_HLBL(___L1__20_intf_23_12)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_12)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L__20_intf_23_12)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 1
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(java_set_navigation(___arg1))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_12)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_13
#undef ___PH_LBL0
#define ___PH_LBL0 189
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_13)
___DEF_P_HLBL(___L1__20_intf_23_13)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_13)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_intf_23_13)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN_VOID
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(java_show_cancelButton())
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_13)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_14
#undef ___PH_LBL0
#define ___PH_LBL0 192
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_14)
___DEF_P_HLBL(___L1__20_intf_23_14)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_14)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_intf_23_14)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN_VOID
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(java_hide_cancelButton())
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_14)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_15
#undef ___PH_LBL0
#define ___PH_LBL0 195
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_15)
___DEF_P_HLBL(___L1__20_intf_23_15)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_15)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L__20_intf_23_15)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,char* ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(java_segm_ctrl_set_title(___arg1,___arg2))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_15)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_16
#undef ___PH_LBL0
#define ___PH_LBL0 198
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_16)
___DEF_P_HLBL(___L1__20_intf_23_16)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_16)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(0,4,0,0)
___DEF_GLBL(___L__20_intf_23_16)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(7)
#define ___NARGS 4
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,char* ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,char* ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,char* ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
#define ___ARG4 ___CFUN_ARG(4)
___BEGIN_CFUN_ARG(4,char* ___arg4)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG4,___arg4,4)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(java_popup_alert(___arg1,___arg2,___arg3,___arg4))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG4,___arg4,4)
___END_CFUN_ARG(4)
#undef ___ARG4
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_16)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(5))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_17
#undef ___PH_LBL0
#define ___PH_LBL0 201
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_17)
___DEF_P_HLBL(___L1__20_intf_23_17)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_17)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L__20_intf_23_17)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 2
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,char* ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,char* ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL_VOID(java_set_pref(___arg1,___arg2))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_17)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_intf_23_18
#undef ___PH_LBL0
#define ___PH_LBL0 204
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_intf_23_18)
___DEF_P_HLBL(___L1__20_intf_23_18)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_intf_23_18)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L__20_intf_23_18)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
#define ___NARGS 1
___BEGIN_CFUN(char* ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,char* ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_CALL(___result,java_get_pref(___arg1))
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_CHARSTRING_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP
___END_CFUN
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_intf_23_18)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_intf_23_event_2d_handler
#undef ___PH_LBL0
#define ___PH_LBL0 207
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_intf_23_event_2d_handler)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_intf_23_event_2d_handler)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_intf_23_event_2d_handler)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_intf," intf",___REF_FAL,32,0)
,___DEF_LBL_PROC(___H__20_intf,0,-1)
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H__20_intf,1,-1)
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H__20_intf,2,-1)
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H__20_intf,0,1)
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_PROC(___H__20_intf,0,-1)
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H__20_intf,2,-1)
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETN,5,0,0x5L))
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_PROC(___H__20_intf,1,-1)
,___DEF_LBL_PROC(___H__20_intf,0,-1)
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H__20_intf,1,-1)
,___DEF_LBL_RET(___H__20_intf,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_intf_23_set_2d_cwd,"intf#set-cwd",___REF_FAL,4,0)
,___DEF_LBL_PROC(___H_intf_23_set_2d_cwd,1,-1)
,___DEF_LBL_RET(___H_intf_23_set_2d_cwd,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_intf_23_set_2d_cwd,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_intf_23_set_2d_cwd,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_intf_23_c_2d_start__repl__server,"intf#c-start_repl_server",___REF_FAL,2,start_repl_server)

,___DEF_LBL_PROC(___H_intf_23_c_2d_start__repl__server,1,-1)
,___DEF_LBL_RET(___H_intf_23_c_2d_start__repl__server,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_intf_23_c_2d_setcwd,"intf#c-setcwd",___REF_FAL,4,setcwd)
,___DEF_LBL_PROC(___H_intf_23_c_2d_setcwd,1,-1)
,___DEF_LBL_RET(___H_intf_23_c_2d_setcwd,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_intf_23_c_2d_setcwd,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_intf_23_c_2d_setcwd,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_intf_23_send_2d_input,"intf#send-input",___REF_FAL,6,send_input)
,___DEF_LBL_PROC(___H_intf_23_send_2d_input,1,-1)
,___DEF_LBL_RET(___H_intf_23_send_2d_input,___IFD(___RETI,8,1,0x3f07L))
,___DEF_LBL_RET(___H_intf_23_send_2d_input,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_intf_23_send_2d_input,___IFD(___RETI,8,1,0x3f02L))
,___DEF_LBL_RET(___H_intf_23_send_2d_input,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_intf_23_send_2d_input,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_intf_23_send_2d_event,"intf#send-event",___REF_FAL,6,sendevent)
,___DEF_LBL_PROC(___H_intf_23_send_2d_event,1,-1)
,___DEF_LBL_RET(___H_intf_23_send_2d_event,___IFD(___RETI,8,1,0x3f07L))
,___DEF_LBL_RET(___H_intf_23_send_2d_event,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_intf_23_send_2d_event,___IFD(___RETI,8,1,0x3f02L))
,___DEF_LBL_RET(___H_intf_23_send_2d_event,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_intf_23_send_2d_event,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_intf_23_set_2d_webView_2d_content,"intf#set-webView-content",___REF_FAL,2,0)

,___DEF_LBL_PROC(___H_intf_23_set_2d_webView_2d_content,5,-1)
,___DEF_LBL_RET(___H_intf_23_set_2d_webView_2d_content,___IFD(___RETI,2,4,0x3f3L))
,___DEF_LBL_INTRO(___H_intf_23_set_2d_webView_2d_content_2d_from_2d_file,"intf#set-webView-content-from-file",
___REF_FAL,5,0)
,___DEF_LBL_PROC(___H_intf_23_set_2d_webView_2d_content_2d_from_2d_file,5,-1)
,___DEF_LBL_RET(___H_intf_23_set_2d_webView_2d_content_2d_from_2d_file,___IFD(___RETI,8,2,0x3f1fL))
,___DEF_LBL_RET(___H_intf_23_set_2d_webView_2d_content_2d_from_2d_file,___IFD(___RETN,5,2,0x1fL))
,___DEF_LBL_RET(___H_intf_23_set_2d_webView_2d_content_2d_from_2d_file,___IFD(___RETI,2,4,0x3fbL))
,___DEF_LBL_RET(___H_intf_23_set_2d_webView_2d_content_2d_from_2d_file,___IFD(___RETI,2,4,0x3f3L))
,___DEF_LBL_INTRO(___H_intf_23_heartbeat,"intf#heartbeat",___REF_FAL,6,heartbeat)
,___DEF_LBL_PROC(___H_intf_23_heartbeat,0,-1)
,___DEF_LBL_RET(___H_intf_23_heartbeat,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_intf_23_heartbeat,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_intf_23_heartbeat,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_intf_23_heartbeat,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_intf_23_heartbeat,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_intf_23_eval_2d_string,"intf#eval-string",___REF_FAL,14,eval_string)
,___DEF_LBL_PROC(___H_intf_23_eval_2d_string,1,-1)
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_PROC(___H_intf_23_eval_2d_string,1,-1)
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_PROC(___H_intf_23_eval_2d_string,0,1)
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_intf_23_eval_2d_string,0,1)
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETI,2,4,0x3f0L))
,___DEF_LBL_RET(___H_intf_23_eval_2d_string,___IFD(___RETI,2,4,0x3f0L))
,___DEF_LBL_INTRO(___H_intf_23_set_2d_event_2d_handler,"intf#set-event-handler",___REF_FAL,4,0)
,___DEF_LBL_PROC(___H_intf_23_set_2d_event_2d_handler,1,-1)
,___DEF_LBL_RET(___H_intf_23_set_2d_event_2d_handler,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_intf_23_set_2d_event_2d_handler,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_intf_23_set_2d_event_2d_handler,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_intf_23_show_2d_view,"intf#show-view",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_intf_23_show_2d_view,1,-1)
,___DEF_LBL_RET(___H_intf_23_show_2d_view,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_intf_23_set_2d_view_2d_content,"intf#set-view-content",___REF_FAL,7,0)
,___DEF_LBL_PROC(___H_intf_23_set_2d_view_2d_content,5,-1)
,___DEF_LBL_RET(___H_intf_23_set_2d_view_2d_content,___OFD(___RETI,12,2,0x3f03dL))
,___DEF_LBL_RET(___H_intf_23_set_2d_view_2d_content,___OFD(___RETI,12,2,0x3f03dL))
,___DEF_LBL_RET(___H_intf_23_set_2d_view_2d_content,___IFD(___RETN,9,2,0x3dL))
,___DEF_LBL_RET(___H_intf_23_set_2d_view_2d_content,___OFD(___RETI,12,12,0x3f003L))
,___DEF_LBL_PROC(___H_intf_23_set_2d_view_2d_content,0,1)
,___DEF_LBL_RET(___H_intf_23_set_2d_view_2d_content,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_intf_23_has_2d_prefix_3f_,"intf#has-prefix?",___REF_FAL,13,0)
,___DEF_LBL_PROC(___H_intf_23_has_2d_prefix_3f_,2,-1)
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETI,2,4,0x3f0L))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETN,5,0,0x1fL))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_intf_23_has_2d_prefix_3f_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_INTRO(___H_intf_23_get_2d_event_2d_parameters,"intf#get-event-parameters",___REF_FAL,17,
0)
,___DEF_LBL_PROC(___H_intf_23_get_2d_event_2d_parameters,1,-1)
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_intf_23_get_2d_event_2d_parameters,1,-1)
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETN,5,0,0x9L))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_PROC(___H_intf_23_get_2d_event_2d_parameters,1,-1)
,___DEF_LBL_RET(___H_intf_23_get_2d_event_2d_parameters,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_intf_23_contained_2d_path_2d_resolve,"intf#contained-path-resolve",___REF_FAL,
9,0)
,___DEF_LBL_PROC(___H_intf_23_contained_2d_path_2d_resolve,1,-1)
,___DEF_LBL_RET(___H_intf_23_contained_2d_path_2d_resolve,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_intf_23_contained_2d_path_2d_resolve,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_intf_23_contained_2d_path_2d_resolve,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_intf_23_contained_2d_path_2d_resolve,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_intf_23_contained_2d_path_2d_resolve,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_intf_23_contained_2d_path_2d_resolve,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_intf_23_contained_2d_path_2d_resolve,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_intf_23_contained_2d_path_2d_resolve,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H__20_intf_23_0," intf#0",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_0,1,-1)
,___DEF_LBL_RET(___H__20_intf_23_0,___IFD(___RETN,2,1,0x3L))
,___DEF_LBL_INTRO(___H__20_intf_23_1," intf#1",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_1,0,-1)
,___DEF_LBL_RET(___H__20_intf_23_1,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H__20_intf_23_2," intf#2",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_2,1,-1)
,___DEF_LBL_RET(___H__20_intf_23_2,___IFD(___RETN,2,1,0x3L))
,___DEF_LBL_INTRO(___H__20_intf_23_3," intf#3",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_3,5,-1)
,___DEF_LBL_RET(___H__20_intf_23_3,___IFD(___RETN,6,5,0x3fL))
,___DEF_LBL_INTRO(___H__20_intf_23_4," intf#4",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_4,5,-1)
,___DEF_LBL_RET(___H__20_intf_23_4,___IFD(___RETN,6,5,0x3fL))
,___DEF_LBL_INTRO(___H__20_intf_23_5," intf#5",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_5,1,-1)
,___DEF_LBL_RET(___H__20_intf_23_5,___IFD(___RETN,2,1,0x3L))
,___DEF_LBL_INTRO(___H__20_intf_23_6," intf#6",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_6,1,-1)
,___DEF_LBL_RET(___H__20_intf_23_6,___IFD(___RETN,2,1,0x3L))
,___DEF_LBL_INTRO(___H__20_intf_23_7," intf#7",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_7,2,-1)
,___DEF_LBL_RET(___H__20_intf_23_7,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H__20_intf_23_8," intf#8",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_8,2,-1)
,___DEF_LBL_RET(___H__20_intf_23_8,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H__20_intf_23_9," intf#9",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_9,1,-1)
,___DEF_LBL_RET(___H__20_intf_23_9,___IFD(___RETN,2,1,0x3L))
,___DEF_LBL_INTRO(___H__20_intf_23_10," intf#10",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_10,2,-1)
,___DEF_LBL_RET(___H__20_intf_23_10,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H__20_intf_23_11," intf#11",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_11,0,-1)
,___DEF_LBL_RET(___H__20_intf_23_11,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H__20_intf_23_12," intf#12",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_12,1,-1)
,___DEF_LBL_RET(___H__20_intf_23_12,___IFD(___RETN,2,1,0x3L))
,___DEF_LBL_INTRO(___H__20_intf_23_13," intf#13",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_13,0,-1)
,___DEF_LBL_RET(___H__20_intf_23_13,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H__20_intf_23_14," intf#14",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_14,0,-1)
,___DEF_LBL_RET(___H__20_intf_23_14,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H__20_intf_23_15," intf#15",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_15,2,-1)
,___DEF_LBL_RET(___H__20_intf_23_15,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H__20_intf_23_16," intf#16",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_16,4,-1)
,___DEF_LBL_RET(___H__20_intf_23_16,___IFD(___RETN,5,4,0x1fL))
,___DEF_LBL_INTRO(___H__20_intf_23_17," intf#17",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_17,2,-1)
,___DEF_LBL_RET(___H__20_intf_23_17,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_INTRO(___H__20_intf_23_18," intf#18",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_intf_23_18,1,-1)
,___DEF_LBL_RET(___H__20_intf_23_18,___IFD(___RETN,2,1,0x3L))
,___DEF_LBL_INTRO(___H_intf_23_event_2d_handler,0,___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_intf_23_event_2d_handler,1,-1)
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,12,2)
               ___GCMAP1(0x3f03dL)
,___DEF_OFD(___RETI,12,2)
               ___GCMAP1(0x3f03dL)
,___DEF_OFD(___RETI,12,12)
               ___GCMAP1(0x3f003L)
___END_OFD

___BEGIN_MOD1
___DEF_PRM(0,___G__20_intf,1)
___DEF_PRM(50,___G_intf_23_set_2d_cwd,34)
___DEF_PRM(31,___G_intf_23_c_2d_start__repl__server,39)
___DEF_PRM(30,___G_intf_23_c_2d_setcwd,42)
___DEF_PRM(49,___G_intf_23_send_2d_input,47)
___DEF_PRM(48,___G_intf_23_send_2d_event,54)
___DEF_PRM(55,___G_intf_23_set_2d_webView_2d_content,61)
___DEF_PRM(56,___G_intf_23_set_2d_webView_2d_content_2d_from_2d_file,64)
___DEF_PRM(42,___G_intf_23_heartbeat,70)
___DEF_PRM(34,___G_intf_23_eval_2d_string,77)
___DEF_PRM(51,___G_intf_23_set_2d_event_2d_handler,92)
___DEF_PRM(60,___G_intf_23_show_2d_view,97)
___DEF_PRM(54,___G_intf_23_set_2d_view_2d_content,100)
___DEF_PRM(41,___G_intf_23_has_2d_prefix_3f_,108)
___DEF_PRM(37,___G_intf_23_get_2d_event_2d_parameters,122)
___DEF_PRM(32,___G_intf_23_contained_2d_path_2d_resolve,140)
___DEF_PRM(1,___G__20_intf_23_0,150)
___DEF_PRM(2,___G__20_intf_23_1,153)
___DEF_PRM(12,___G__20_intf_23_2,156)
___DEF_PRM(13,___G__20_intf_23_3,159)
___DEF_PRM(14,___G__20_intf_23_4,162)
___DEF_PRM(15,___G__20_intf_23_5,165)
___DEF_PRM(16,___G__20_intf_23_6,168)
___DEF_PRM(17,___G__20_intf_23_7,171)
___DEF_PRM(18,___G__20_intf_23_8,174)
___DEF_PRM(19,___G__20_intf_23_9,177)
___DEF_PRM(3,___G__20_intf_23_10,180)
___DEF_PRM(4,___G__20_intf_23_11,183)
___DEF_PRM(5,___G__20_intf_23_12,186)
___DEF_PRM(6,___G__20_intf_23_13,189)
___DEF_PRM(7,___G__20_intf_23_14,192)
___DEF_PRM(8,___G__20_intf_23_15,195)
___DEF_PRM(9,___G__20_intf_23_16,198)
___DEF_PRM(10,___G__20_intf_23_17,201)
___DEF_PRM(11,___G__20_intf_23_18,204)
___END_MOD1

___BEGIN_MOD2
___DEF_SYM2(0,___S_console,"console")
___DEF_SYM2(1,___S_input,"input")
___DEF_KEY2(0,___K_direction,"direction")
___END_MOD2

#endif
