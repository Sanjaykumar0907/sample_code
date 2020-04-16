#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUSIZE 8192
#define PATH_VAR_LSYS_DIR               "/var/logical-systems/"


int main() {

   char *name =  "Hello World";    
   char lsys_dir[BUFSIZ];
   int dir_len;
   strncpy(lsys_dir, PATH_VAR_LSYS_DIR, BUFSIZ);
   strncat(lsys_dir, name, BUFSIZ);
   dir_len = strlen(lsys_dir);
   strlcpy(lsys_dir + dir_len, "/tmp", BUFSIZ);

   return 0;

}
