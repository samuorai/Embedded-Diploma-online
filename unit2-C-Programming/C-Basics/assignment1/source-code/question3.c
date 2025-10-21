/*
Assignment #3 18-10-2025
Write C Program to Add Two Integers

i should see the Console as following:
########## Console-output ##########
Enter two integers: 12
11
Sum: 23
####################################
*/

#include "stdio.h"

int main()
{
	int a,b;
	printf("Enter two integers: ");
	scanf("%d\n",&a);
	scanf("%d",&b);
	printf("sum= %d",a+b);
	return 0;
	
}