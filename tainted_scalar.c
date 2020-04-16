#include<stdio.h>
#include<stdlib.h>

//alpha.security.taint.TaintPropagation
int tainted_scalar(){

    int d;
    int *p= NULL;
    scanf("%d",&d);

    p=(int *)malloc(d);

    *p=100;
}
