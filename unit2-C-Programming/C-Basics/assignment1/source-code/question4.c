/*
  Assignment #4 18-10-2025

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
########## Console-output ##########
Enter two numbers: 2.4
1.1
Product: 2.640000
####################################
*/

#include "stdio.h"

int main()
{
	float a,b;
	printf("Enter two numbers: \n");
	scanf("%f\n",&a);
	scanf("%f\n",&b);
	printf("product: %f",a*b);
	return 0;

}
