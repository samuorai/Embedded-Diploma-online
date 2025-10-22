/*
 * ext4-solution.c
 *
 *  Created on: Oct 23, 2025
 *      Author: Wael Osama
 * write C program to check weather number is positive or negative
 */
#include <stdio.h>

int main() 
{
    float digit;

    printf("Enter a number: ");
    scanf("%f", &digit);

    // Check if the number is positive, negative, or zero
    if (digit > 0) 
    {
        printf("%.2f is positive.\n", digit);
    } 
    else if (digit < 0) 
    {
        printf("%.2f is negative.\n", digit);
    } 
    else 
    {
        printf("you entered zero.\n");
    }
    return 0;
}