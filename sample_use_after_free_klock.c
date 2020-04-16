#include <stdio.h>
#include <stdlib.h>

typedef struct mgmt_peer_s {
       int *iptr;
}  mgmt_peer_t;


void func(mgmt_peer_t *mp) {
    if (!mp) {
         mp = (mgmt_peer_t *)malloc(sizeof(mgmt_peer_t));
         if (!mp) return;
         mp->iptr = (int *)malloc(sizeof(int));
         *(mp->iptr) = 10;
    } 

    if (!mp->iptr) {
        free(mp);
	return ;
    }
	
}
     
int main() {
    int d = 0;
    mgmt_peer_t *mp = NULL;
    scanf("%d", &d);
    
    if (d > 0) {
         mp = (mgmt_peer_t *)malloc(sizeof(mgmt_peer_t));
    }

    func(mp);
    
    if (mp->iptr) free(mp->iptr);
    if (mp) free(mp);
}
    

