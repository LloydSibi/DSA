/**************************************************************
* File         :   exp_2.30.c
* Description  :   Program to print  print diamond star patterns
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   08-08-2021
****************************************************************/

#include<stdio.h>
int main()
{
    int rowNumber,i,space,star;

    printf("Enter the limit: ");
    scanf("%d",&rowNumber);
    
    for(i=1;i<=rowNumber;i++)  
    {
        for(space=i;space<rowNumber;space++)    
        {
            printf(" ");
        }
        for(star=1;star<=(i*2)-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=rowNumber-1;i>=1;i--)  
    {
        for(space=1;space<=rowNumber-i;space++)
        {
            printf(" ");
        
        }
        for(star=1;star<=(i*2)-1;star++)
        {
            printf("*");
        }
        printf("\n");
    } 

    return 0;
}