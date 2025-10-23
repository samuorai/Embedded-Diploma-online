/*
 * ext6-solution.c
 *
 *  Created on: Oct 23, 2025
 *      Author: Wael Osama
 * write C program to calculate sum of natural numbers
 */

 #include <stdio.h>

int main() 
{
    int n, sum = 0;

   
    printf("Enter an integer: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; ++i) 
    {
        sum += i;
    }

    // Display the result
    printf("Sum = %d", sum);

    return 0;
}
