(define (php-generator msg . args)

  (define (entry-point name) (gen "run('" name "');\n?>\n"))
  (define (reg num) (gen "$reg[" num "]"))
  (define (stk num) (gen "$stack[$sp+" num "]"))
  (define (glo name) (gen "$glo[" (object->string
                                  (symbol->string name)) "]"))
  (define (clo lval index) (gen lval "[" index "]"))
  (define (lbl name) (gen "'" name "'"))
  (define (adjust-sp offset) (gen "$sp += " offset ";\n"))
  (define (void) (gen "null"))
  (define (proc-obj proc) (gen "'" proc "'"))
  (define (label-start name)
    (gen
     "\nfunction " name "() {\n"
     "global $glo;\n"
     "global $reg;\n"
     "global $stack;\n"
     "global $sp;\n"
     "global $nargs;\n"
     ))
  (define (label-stop) "}\n")
  (define (var-name name) (gen "$" name))
  (define (comment . xs) (gen "// " xs "\n"))
  (define (narg-check n)
    (gen "if (" (var-name 'nargs) " !== " n ") {\n"
         (die "incorrect number of arguments")
         "}\n"))
  (define (die msg) (gen "die(\"" msg "\\n\");\n"))
  (define (copy a b) (gen a " = " b ";\n"))
  (define (apply_ a b) (gen a " = " b ";\n"))
  (define (if_ cond_ then else_)
    (gen "if (" cond_ ") {\n"
         then "\n"
         "} else {\n"
         else_
         "}\n"))
  (define (return expr) (gen "return " expr ";\n"))



  (let ((fn (case msg
              ((entry-point) entry-point)
              ((reg) reg)
              ((stk) stk)
              ((glo) glo)
              ((clo) clo)
              ((lbl) lbl)
              ((adjust-sp) adjust-sp)
              ((void) void)
              ((proc-obj) proc-obj)
              ((label-start) label-start)
              ((label-stop) label-stop)
              ((var-name) var-name)
              ((comment) comment)
              ((narg-check) narg-check)
              ((die) die)
              ((copy) copy)
              ((apply) apply_)
              ((if) if_)
              ((return) return)
              (else
               (compiler-internal-error "unknown message" msg)))))
    (apply fn args)))

(define php-runtime
#<<EOF
<?php
$glo = array();
$reg = array(NULL);
$stack = array();
$sp = -1;
$nargs = 0;

function lbl1_fx_3c_() { // fx<
global $reg;
global $stack;
global $sp;
global $nargs;
if ($nargs !== 2) die("wrong number of arguments");
$reg[1] = $reg[1] < $reg[2];
return $reg[0];
};
$glo["fx<"] = 'lbl1_fx_3c_';

function lbl1_fx_2b_() { // fx+
global $reg;
global $stack;
global $sp;
global $nargs;
if ($nargs !== 2) die("wrong number of arguments");
$reg[1] = $reg[1] + $reg[2];
return $reg[0];
};
$glo["fx+"] = 'lbl1_fx_2b_';

function lbl1_fx_2a_() { // fx*
global $reg;
global $stack;
global $sp;
global $nargs;
if ($nargs !== 2) die("wrong number of arguments");
$reg[1] = $reg[1] * $reg[2];
return $reg[0];
};
$glo["fx*"] = 'lbl1_fx_2a_';

function lbl1_fx_2d_() {
global $reg;
global $stack;
global $sp;
global $nargs;
if ($nargs !== 2) die("wrong number of arguments");
$reg[1] = $reg[1] - $reg[2];
return $reg[0];
};
$glo["fx-"] = 'lbl1_fx_2d_';

function lbl1_print() {
global $reg;
global $stack;
global $sp;
global $nargs;
if ($nargs !== 1) die("wrong number of arguments");
echo $reg[1] . "\n";
return $reg[0];
};
$glo["print"] = 'lbl1_print';

function run($pc) {
while ($pc !== NULL) $pc = $pc();
}
EOF
)