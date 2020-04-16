#include<stdio.h> 
#include<string.h> 

int resource_leak() 
{ 
	char source[] = "GeeksForGeeks"; 

	// A copy of source is created dynamically 
	// and pointer to copy is returned. 
	char* target = strdup(source); 

	printf("%s", target);
        target = strdup(source); 
	return 0; 
} 

