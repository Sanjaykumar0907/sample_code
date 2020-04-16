
//--enable-checker alpha.core.PointerArithm
typedef enum boolean_ 
{
   FALSE = 0,
   TRUE = 1
} boolean;


void c(int *, boolean);

void c(int *a, boolean indexed ){
     int x;
     int local_count;
     int i = 0;
     if (indexed) {
	 local_count = 5;
     } else {
	 local_count = 1;
     } 
     for ( i = 0; i <= local_count; i++) {
           x = a[i];
    }
}
int array_singleton(void){
     int a;
     a = 10;
     c(&a, FALSE);
}

