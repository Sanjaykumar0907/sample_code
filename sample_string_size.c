#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {

   char *dest = (char *) malloc(sizeof(char)*3);

   char *path=getenv("PATH");


   strcpy(dest, path);

   free(dest);
}

