(define (js-generator msg . args)

  (define (entry-point name) (gen "run(" name ");\n"))
  (define (reg num) (gen "reg[" num "]"))
  (define (stk num) (gen "stack[sp+" num "]"))
  (define (glo name) (gen "glo[" (object->string
                                  (symbol->string name)) "]"))
  (define (clo lval index) (gen lval "[" index "]"))
  (define (lbl name) name)
  (define (adjust-sp offset) (gen "sp += " offset ";\n"))
  (define (void) (gen "undefined"))
  (define (proc-obj proc) proc)
  (define (label-start name) (gen "\nfunction " name "() {\n"))
  (define (label-stop) "}\n")
  (define (var-name name) name)
  (define (comment . xs) (gen "// " xs "\n"))
  (define (narg-check n)
    (gen "if (" (var-name 'nargs) " !== " n ") {\n"
         (die "incorrect number of arguments")
         "}\n"))
  (define (die msg) (gen "throw \"" msg "\";\n"))
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

(define js-runtime
#<<EOF
var glo = {};
var reg = [null];
var stack = [];
var sp = -1;
var nargs = 0;
var nextpc = null;
var _yield;

if (this.hasOwnProperty('setTimeout')) {
    _yield = this.setTimeout;
} else {
    _yield = function() {};
}


function lbl1_fx_3c_() { // fx<
    if (nargs !== 2) throw "wrong number of arguments";
    reg[1] = reg[1] < reg[2];
    return reg[0];
}

glo["fx<"] = lbl1_fx_3c_;

function lbl1_fx_2a_() { // fx*
    if (nargs !== 2) throw "wrong number of arguments";
    reg[1] = reg[1] * reg[2];
    return reg[0];
}

glo["fx*"] = lbl1_fx_2a_;


function lbl1_fx_2b_() { // fx+
    if (nargs !== 2) throw "wrong number of arguments";
    reg[1] = reg[1] + reg[2];
    return reg[0];
}

glo["fx+"] = lbl1_fx_2b_;

function lbl1_fx_2d_() { // fx-
    if (nargs !== 2) throw "wrong number of arguments";
    reg[1] = reg[1] - reg[2];
    return reg[0];
}

glo["fx-"] = lbl1_fx_2d_;

function lbl1_print() { // print
    if (nargs !== 1) throw "wrong number of arguments";
    print(reg[1]);
    return reg[0];
}

glo["print"] = lbl1_print;


function run(pc) {
    nextpc = pc;
    while (nextpc !== null) {
        _yield("", 0);
        pc = nextpc;
        nextpc = null;
        while (pc !== null) {
            pc = pc();
        }
    }
}
EOF
)