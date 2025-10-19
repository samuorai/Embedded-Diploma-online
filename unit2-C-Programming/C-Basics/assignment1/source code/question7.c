/*
Assignment #7 20-10-2025
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
*/

#include "stdio.h"

int main()
{
	int c,e;
	printf("Enter first number: \n");
	fflush(stdout);
	scanf("%d",&c);
	printf("Enter second number: \n");
	fflush(stdout);
	scanf("%d",&e);
	c = c ^ e;
	e = c ^ e;
	c = e ^ c;
	printf("the first number is: %d\n",c);
	printf("the second number is: %d\n",e);
}
