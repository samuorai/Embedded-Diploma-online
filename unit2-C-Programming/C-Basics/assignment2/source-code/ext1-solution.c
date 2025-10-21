/*
 * ext1-solution.c
 *
 *  Created on: Oct 21, 2025
 *      Author: Wael Osama
 * write C program to check weather aa number is Even or Odd
 */

#include <stdio.h>

int main()
{
	int v;
	printf("Enter a number to check: \n");
	fflush(stdout);
	scanf("%d",&v);
	if (v%2 == 0)
	{
		printf("the number is Even.");
	}
	else
	{
		printf("the number is odd.");
	}
}

