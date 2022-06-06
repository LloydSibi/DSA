/**************************************************************
* File         :   exp_2.37.c
* Description  :   Program to print amount  got after user entered days
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   08-08-2021
****************************************************************/
#include<stdio.h>
int main()
{
    int amount,days,i,totalAmount=0;
    printf("Enter the amount got on the initial day: ");
    scanf("%d",&amount);
    printf("Enter total number of days: ");
    scanf("%d",&days);
    for(i=1;i<=days;i++)
    {
        totalAmount+=amount;  
        amount*=2;
    }
    printf("Total amount after %d days is Rs.%d.",days,totalAmount);
    return 0;
}