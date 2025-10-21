/*
Assignment #2 14-10-2025
Write C Program to Print a Integer Entered by a User
i should see the Console as following:
########## Console-output ##########
Enter a integer: 25
You entered: 25
####################################
*/

#include "stdio.h"

int main()
{

	int digit;
	printf("Enter an integer: ");
	scanf("%d",&digit);
	printf("you entered: %d",digit);
	return 0;

}
