/*
 * ext7-solution.c
 *
 *  Created on: Oct 23, 2025
 *      Author: Wael Osama
 * write C program to find factorial of a number
 */

 #include <stdio.h>

int main() 
{
    int h, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &h);

    
    if (h < 0)
        printf("Error!! Factorial of negative number doesn't exist.");
    else {
        for (i = 1; i <= h; ++i) {
            factorial *= i; 
        }
        printf("Factorial = %llu\n", factorial);
    }

    return 0;
}