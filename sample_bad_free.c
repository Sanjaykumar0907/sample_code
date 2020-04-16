#include <stdio.h>
#include <stdlib.h>

int * f() {
     
    int  i = 100;
    return &i;
}


void bad_free ()
{
   int *j = f();

   int *(* fptr)() = &f;
   printf("%d",*j);

   free(j); //unix.Malloc
   free(fptr);
}   

