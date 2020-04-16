#include<stdlib.h>
#include<stdio.h>


int forward_null() {

   int *p= NULL;
   char c;

   scanf("%c",&c);
  
   if (c=='y') {
        p = (int *)malloc(sizeof(int *));
         
   }
   scanf("%d", p);
   if (*p > 0) { 
         free(p);
         p = NULL;
   }
   else if (*p < 0) {
      free(p);
        p =NULL;
   }
   else {}
   
   *p++;
   printf("%d",*p);

}
