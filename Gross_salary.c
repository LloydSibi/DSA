#include<stdio.h>
int main()
{
    float bp,da,hra,gs;
    char operator;
    printf("\nEnter Basic Salary:");
    scanf("%f",&bp);
    da=0.4 * bp;
    hra=0.2 * bp;
    gs=da+hra+gs;
    printf("\nBasic Salary=%f",bp);
    printf("\nDearness Allowance=%f",da);
    printf("\nHouse Rent Allowance=%f",hra);
    printf("\nGross Pay=%f",gs);






    return 0;
}