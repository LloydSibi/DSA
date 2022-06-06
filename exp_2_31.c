/**************************************************************
* File         :   exp_2.31.c
* Description  :   Program to print hollow diamond star patterns
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   08-08-2021
****************************************************************/

#include<stdio.h>
int main()
{
    int rowNumber,i,j,star;
    printf("Enter number of rows: ");
    scanf("%d",&rowNumber);

    for(i=1;i<=rowNumber;i++)   //To print upper half
    {
        for(j=i;j<rowNumber;j++)   //for space
        {
            printf(" ");
        }
        for(star=1;star<=(i*2)-1;star++)   //To print Star
        {
            if(star==1 || star==(i*2)-1) 
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    
    for(i=rowNumber;i>=1;i--)  //To print lower star pattern
    {
        for(j=1;j<=rowNumber-i;j++)
        {
            printf(" ");
        
        }
        for(star=1;star<=(i*2)-1;star++)
        {
           if(star==1 || star==(i*2)-1) 
           printf("*");
           else
           printf(" ");
        }
        printf("\n");
    } 
    return 0;
}