/**************************************************************
* File         :   exp_2.34_.c
* Description  :   Program to print sum of the series 1 11 111 ....n terms
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   09-08-2021
****************************************************************/
#include<stdio.h>
int main()
{
    int number,sum=0,i,j=0;
    printf("Enter no of terms: ");
    scanf("%d",&number);
    printf("Series will be  ");
    for(i=1;i<=number;i++)
    {
        j=(j*10)+1;
        sum=sum+j;
        printf("%d",j);
    }
    printf("\nTHE SUM OF SERIES WILL BE %d",sum);
    return 0;
}
