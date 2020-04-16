#include <stdio.h>


int k[5] = {0};


int main() {
 int j=0;
 for ( j = 0;j<=6;j++ ) { 
          k[j]=j;   
         printf("%d", k[j]);
}
  k[5] = 5;
}
