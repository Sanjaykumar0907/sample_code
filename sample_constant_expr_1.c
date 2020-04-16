#include<stdio.h>


void main()
{

     int b = 0;
     if (b ==b ) //[-Wtautological-compare]
          { printf ("not b");} 

} 

/*Error: CONSTANT_EXPRESSION_RESULT:
/homes/viditac/clang-sa-new/sample_constant_expr_1.c:8:
same_on_both_sides: "b == b" is always true regardless of the values of its operands because those operands are identical. This occurs as the logical operand of "if".
*/

