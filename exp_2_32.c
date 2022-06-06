/**************************************************************
* File         :   exp_2.32.c
* Description  :   Program to print solid Half Diamond pattern using stars 
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   08-08-2021
****************************************************************/
#include<stdio.h>
int main()
{
    int lim,i,j;
    printf("enter limit: ");
    scanf("%d",&lim);
    for(i=1;i<=lim;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");

    } 

    for(i=2;i<=lim;i++)     
    {
        for(j=i;j<=lim;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
return 0;
} 