#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

// /homes/viditac/psd_git_repo/clang/tools/scan-build-py/bin/scan-build -vvvv --intercept-first  --use-analyzer /volume/hab/Linux/Ubuntu-12.04/x86_64/llvm/7.0/current/bin/clang  --analyze-headers  make
// --enable-checker alpha.core.SizeofPtr  (malloc, memset, strncmp)
// --enable-checker unix.MallocSizeof (malloc)
//  unix.Malloc ---- resource leak
int sizeof_mismtach() {

   char *c ,*d;
   c = (char *)malloc(sizeof(c)); 
   d = (char *)malloc(sizeof(char));

   memset(d,0,sizeof(d));
   scanf("%s %s",c,d);
   printf("%s %s",c,d);

   strncmp(c,d,sizeof(c));
}


   

