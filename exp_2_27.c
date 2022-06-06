/******************************************************
* File         :   exp_2.27.c
* Description  :   Program to convert decimal to its octal equivalent
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   9-08-2021
*******************************************************/

#include<stdio.h>
int main()
{
    int decimal,octal=0,MainNum,remainder,digitPlace=1;
    printf("\nEnter the decimal number to convert to octal: ");
    scanf("%d",&decimal);
    MainNum= decimal;
    while(decimal!=0)
    {
        remainder= decimal%8;
        decimal=decimal/8;
        octal=octal+(remainder*digitPlace);
        digitPlace=digitPlace*10;
    }
    printf("Octal number of %d is %d. ",MainNum,octal);
    return 0;
}