#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//security.insecureAPI.strcpy
//alpha.unix.cstring.OutOfBounds
int strcpy_string_overflow() {
    char a[10];
    scanf("%s", a);
  
    char *p = (char *)malloc(5);

    strncpy(p,a,strlen(a)); 

//    strncpy(p,a,10);//alpha.unix.cstring.OutOfBounds
    strcpy(p,a); //security.insecureAPI.strcpy

    strcpy(a,"hello world"); // STRING_OVERFLOW
    strncpy(a,"hello world", strlen("hello world")); // STRING_OVERFLOW
    strcat(a,p); ////alpha.unix.cstring.OutOfBounds  OVERRUN
}
