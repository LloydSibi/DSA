/**************************************************************
* File         :   exp_2.29.c
* Description  :   Program to check whether a number is perfect number or not
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   08-08-2021
****************************************************************/
#include<stdio.h>
int main()
{
    int number,sum=0;
    printf("Enter a number to check whether it's a perfect number or not: ");
    scanf("%d",&number);
    for(int i=1;i<=(number/2);i++)
    {
        if((number%i)==0)
        {
            sum=sum+i;
        }
    }       
    if(sum==number)
        {
            printf("%d is a perfect number.",number);
        }
    else
    {
        printf("%d is not a perfect number.",number);
    }
    return 0;
}