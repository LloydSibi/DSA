/******************************************************
* File         :   exp_2.22.c
* Description  :   Program to print 1 121 12321 pyramid
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   8-08-2021
*******************************************************/
#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)     
    {
        for(j=1;j<=(rows-i);j++)     
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)    
        {
            printf("%d", j);
        }
        for(j=i-1;j>=1;j--)   
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}