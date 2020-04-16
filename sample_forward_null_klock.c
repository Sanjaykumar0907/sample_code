#include<stdio.h>
#include<stdlib.h>

void func2(char *c) {
     char *local = c;
     sprintf (c,"HelloWorld");

}

void func1(char *c) {
     func2(c);
}

int main()
{

  char *c =  NULL;
  int d = 0;
  scanf ("%d", &d);  
  
  if (d > 0) {
	  c = (char *)malloc(sizeof(char)*10);
  }
  if (!c) {
      printf("c is NULL");
  }
  func1(c);

}
 
