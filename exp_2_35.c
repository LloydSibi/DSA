/**************************************************************
* File         :   exp_2.35.c
* Description  :   Program to print Floyd's triangle
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   09-08-2021
****************************************************************/

#include<stdio.h>
int main()
{
    int i,j,terms,value=0;
    printf("Enter number of rows: ");
    scanf("%d",&terms);
    for(i=1;i<=terms;i++)
    {
        for(j=1;j<=i;j++)
        {
            value+=1;
            printf("%d ",value);
        }
        printf("\n");
    }
    return 0;
}