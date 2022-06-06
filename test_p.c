/******************************************************
* File         :   exp_2.25.c
* Description  :   Program to print cube of a number till the limit
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   4-08-2021
*******************************************************/
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number of terms :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        printf("\n Number is %d: and cube is %d",i,(i*i*i));
    }
    return 0;
}