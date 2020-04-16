#include<stdlib.h>
#include<stdio.h>


int memory_leak() {

   int *p= NULL;
   char c;

   scanf("%c",&c);
  
   if (c=='y') {
        p = (int *)malloc(sizeof(p));
   	scanf("%d", p);
         
	}  
   if (*p > 0) { 
       free(p);
   }
   else if (*p < 0) {
      free(p);
   }
   printf("%d",*p);

}
