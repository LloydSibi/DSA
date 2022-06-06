/**************************************************************
* File         :   exp_2.24.c
* Description  :   Program to print Pascal's triangle
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   09-08-2021
****************************************************************/
#include<stdio.h>
int main()
{
    int i,j,space,n,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)   //for rows
    {
        for(space=1;space<(rows-i);space++)  //for spaces
        {
            printf(" ");
        }
        n=1;
        for(j=0;j<=i;j++)    //print values
        {
            printf(" %d",n);
            n=n*(i-j)/(j+1);   //for calculating the value
        }
        printf("\n");
    }
    return 0;
}