#include<stdio.h>
int main() {
    int a1,a2,a3;
    printf("\nEnter three angles of triangle:");
    scanf("%d%d%d",&a1,&a2,&a3);
    if (a1+a2+a3==180)
    {
        printf("\nIt is a valid triangle");
    }
    else
    {
        printf("\nIts not a valid triangle");
    }









    return 0;
}