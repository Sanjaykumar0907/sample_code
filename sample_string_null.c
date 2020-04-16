#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {

   char *src = (char *) malloc(sizeof(char)*10);
   char *dest = (char *) malloc(sizeof(char)*3);
	

   int fd = open("foo.txt", "r");
   read(fd, src);
   strcpy(dest, src);

   free(src); free(dest);
}

