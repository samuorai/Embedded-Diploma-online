/*
  Assignment #5 18-10-2025

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################
*/

#include "stdio.h"

int main()
{
	char b;
	printf("Enter a character: \n");
	scanf("%c",&b);
	printf("ASCII value of %c = %d",b,b);
	return 0;

}
