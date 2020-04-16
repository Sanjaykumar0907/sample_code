#include <stdlib.h>

void f(int *i)
  { 
    *i =30;
}
int use_after() {

   int *iptr = (int *)malloc(sizeof(int *));
//   free(iptr);
   *iptr = 10;
   f(iptr);
   *iptr=20;


return 0;
}
