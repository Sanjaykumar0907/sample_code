#include <stdint.h>
#include <stdio.h>

int const_expr() {

int i = 10;
uintptr_t p;
p = (uintptr_t)&i;

printf ("\n%x" , ((unsigned int)p >> 32)); // [-Wshift-count-overflow]
return 0;
}

/*Error: CONSTANT_EXPRESSION_RESULT:
/homes/viditac/clang-sa/sample_constant_expr.c:10:
result_independent_of_operands: "(unsigned int)p >> 32" is 0 regardless of the values of its operands. This occurs as an argument to a function call.
*/


