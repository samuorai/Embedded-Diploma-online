/*
 * ext5-solution.c
 *
 *  Created on: Oct 23, 2025
 *      Author: Wael Osama
 * write C program to check weather character is alphabet or not
 */
#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {
        printf("%c is an alphabet.\n", ch);
    } else 
    {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}