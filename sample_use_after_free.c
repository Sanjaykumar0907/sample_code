#include<stdlib.h>
#include<stdio.h>


int use_after_free() {

   int *p= NULL;
   //int *p= (int *)malloc(sizeof(p));
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
   *p++;
   printf("%d",*p);

}
