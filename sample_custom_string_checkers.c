#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {

   char *src = (char *) malloc(sizeof(char)*10);
   char *dest = (char *) malloc(sizeof(char)*3);
	
   gets(src);
   strcpy(dest, src);
   strcat(dest, "Hello World");
   sprintf(dest, "%s", "Hello World");
   free(src); free(dest);
}

