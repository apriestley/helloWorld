/* 	Simple Hello World program
	Aaron Priestley (apriestley7@gmail.com)
	28th April 2015
*/
#include <stdio.h>

int main(int argc, char **argv){
	/* Print using system call */
	write(1, "Hello World\n", 12);
	/* can also use C standard library for printing to file descriptors or 
	strings. Need to use:
	#include<stdio.h>
	#include<stdlib.h>
	at head of file
	
	Examples:
	printf("Hello World\n");
	fprintf(stdout, "Hello World\n");
	fprintf(stderr, "Hello World\n");
	sprintf(str, "Hello World\n");
	*/
	return 0;
}
