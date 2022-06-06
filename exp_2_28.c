/******************************************************
* File         :   exp_2.28.c
* Description  :   Program to print HCF & LCM of two numbers
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   5-08-2021
*******************************************************/
#include<stdio.h>
int main()
{
    int i=0,HCF,LCM;
    int number1,number2;
    printf("Enter first number: ");
    scanf("%d",&number1);
    printf("Enter second number: ");
    scanf("%d",&number2);
    for(i=1;i<=number1;i++)
    {
        if((number1%i==0) && (number2%i==0))
        {
            HCF=i;
        }
    }
    LCM=(number1*number2)/HCF;
    printf("\nHCF = %d ",HCF);
    printf("\nLCM = %d ",LCM);
    return 0;
}