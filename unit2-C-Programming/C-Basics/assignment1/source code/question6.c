/*
Assignment #6 18-10-2025
Write Source Code to Swap Two Numbers

######### Console_output #########
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
##################################
*/

#include "stdio.h"

int main()
{
	float x,y,z;

	printf("Enter value of a: \n");
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of b: \n");
	fflush(stdout);
	scanf("%f",&y);
	z=x;
	x=y;
	y=z;
	printf("After swapping, value of a = %f\n",x);
	printf("After swapping, value of b = %f\n",y);

	return 0;
}
