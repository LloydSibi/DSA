/******************************************************
* File         :   exp_2.26.c
* Description  :   Program to convert binary to its decimal equivalent
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   05-08-2021
*******************************************************/

#include<stdio.h>
int main()
{
    unsigned long long binary,decimal=0,MainNum,remainder,digitPlace=1;
    printf("Enter the binary number to convert to decimal: ");
    scanf("%llu",&binary);
    MainNum= binary;
    while(binary!=0)
    {
        remainder= binary%10;
        binary=binary/10;
        decimal=decimal+(remainder*digitPlace);
        digitPlace=digitPlace*2;
    }
    printf("\nDecimal number of %llu is %llu. ",MainNum,decimal);
    return 0;
}