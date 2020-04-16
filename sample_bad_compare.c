#include <stdio.h>
#include<string.h>
#include<signal.h>

void f(){}
int bad_compare() {

   char *cptr;
   char *str = "Hello World";

   strcpy(cptr,str);

   if (cptr == "Hello World") {} //[-Wstring-compare] 
  
   if (cptr == &f) {} // [-Wcompare-distinct-pointer-types] 

}

