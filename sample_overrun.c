#include <stdio.h>

// alpha.security.ArrayBound 
// alpha.security.ArrayBoundV2
int k[5] = {0};


int overrun() {
 int j=0;
// for ( j = 0;j<=6;j++ ) { 
   //       k[j]=j;   
     //    printf("%d", k[j]);
//}
  k[5] = 5;
}
