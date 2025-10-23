/*
 * ext8-solution.c
 *
 *  Created on: Oct 23, 2025
 *      Author: Wael Osama
 * write C program to make a simple caclulator add,subtract,mutiply or divide using switch case
 */

 #include <stdio.h>

int main() 
{
    char operator;
    double fn, sn, result;
    printf("Enter an operator either + or - or * or divide: ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &fn, &sn);
    switch(operator) 
    {
        case '+':
            result = fn + sn;
            printf("%.1lf + %.1lf = %.1lf\n", fn, sn, result);
            break;
        case '-':
            result = fn - sn;
            printf("%.1lf - %.1lf = %.1lf\n", fn, sn, result);
            break;
        case '*':
            result = fn* sn;
            printf("%.1lf * %.1lf = %.1lf\n", fn, sn, result);
            break;
        case '/':
            if(sn != 0) {
                result = fn / sn;
                printf("%.1lf / %.1lf = %.1lf\n", fn, sn, result);
            } else {
                printf("Error! you can't divide by zero.");
            }
            break;
        default:
            printf("Error! Enter a valid operator.");
    }

    return 0;
}