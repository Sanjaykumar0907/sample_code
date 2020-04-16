#include<stdio.h>
#include<stdlib.h>

//--enable-checker alpha.security.taint.TaintPropagation
int tainted_string() {

   char *str = (char *)malloc(sizeof(char));
   scanf("%s",str);
   system(str);
return 0;

    
}
   
