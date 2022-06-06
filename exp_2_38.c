/**************************************************************
* File         :   exp_2.38.c
* Description  :   Program to guess a random number generated
* Author       :   Lloyd Sibi
* Version      :   1.0
* Date         :   08-08-2021
****************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number,count=0,randomNumber;
    randomNumber=(rand() % (100 -1 + 1)) + 1;    
    while(number!=randomNumber)
    {
        printf("      Guess the Number I thought (1 to 100)\n");
        scanf("%d",&number);
        count++;   


        if(number>randomNumber)
        {
            printf("Too High!!\n");
        }
        else if(number<randomNumber)
        {
            printf("Too Less!!\n");
        }
        else
        {
            printf("YES!! It's Correct!!\n");
            printf("Number of Guesses:%d",count);
        }
    }
    return 0;
}