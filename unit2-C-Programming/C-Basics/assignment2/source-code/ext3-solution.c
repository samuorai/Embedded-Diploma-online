/*
 * ext3-solution.c
 *
 *  Created on: Oct 22, 2025
 *      Author: Wael Osama
 * write C program to find the largest number among three numbers
 */

 #include <stdio.h>

 int main()
 {
        float a,b,c;
        printf("Enter three numbers: \n");
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        if (a>b&&a>c)
        {
            printf("Largest number = %.2f",a);
        }
        else if (b>a&&b>c)
        {
            printf("Largest number = %.2f",b);
        }
        else if (c>a&&c>b)
        {
            printf("Largest number = %.2f",c);
        }
        else
        {
            printf("don't put equal numbers.");
        }
return 0;
 }