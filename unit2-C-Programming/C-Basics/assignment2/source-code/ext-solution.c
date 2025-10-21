/*
 * ext1-solution.c
 *
 *  Created on: Oct 22, 2025
 *      Author: Wael Osama
 * write C program to check weather the character is vowel or consonant
 */

#include <stdio.h>

int main()
{
	char u;
	printf("Enter a character to check: \n");
	scanf("%c",&u);
	if (u=='a'||u=='A'||u=='e'||u=='E'||u=='i'||u=='I'||u=='o'||u=='O'||u=='u'||u=='U')
	{
		printf("The character %c is vowel.",u);
	}
	else
	{
		printf("The character %c is consonant.",u);
	}
}
