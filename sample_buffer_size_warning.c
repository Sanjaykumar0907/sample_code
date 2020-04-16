#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcpy_string_overflow() {
    char a[10];
  
    char *p = (char *)malloc(10);

    snprintf(p ,10 ,"Hello World");
    //scanf("%s", p);
    strncpy(a,p,10); //Coverity : BUFFER_SIZE_WARNING
    sprintf(p ,"Hello World");
    free(p);
}

/*
Error: BUFFER_SIZE_WARNING:
/homes/viditac/clang-sa-new/sample_buffer_size_warning.c:12:
buffer_size_warning: Calling strncpy with a maximum size argument of 10 bytes on destination array "a" of size 10 bytes might leave the destination string unterminated.

*/
