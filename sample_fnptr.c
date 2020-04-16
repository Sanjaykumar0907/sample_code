#include<stdlib.h>

void dealloc(int *p) {
	free(p);
}

int main(){
     int *p = NULL;
     void (*fptr)(int *);
     p = (int *)malloc(sizeof(int));
     fptr = dealloc;  
     fptr(p); 
     free(p); // USE_AFTER_FREE : As "p" is already freed in call "fptr(p)"
} 
