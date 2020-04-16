#include<string.h>

#define LEN sizeof(char)*10
int bad_sizeof() {

   char carr[LEN];

   bzero(carr, sizeof(LEN));
   memset(carr, 0, sizeof(LEN));
}
