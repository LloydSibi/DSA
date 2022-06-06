#include<stdio.h>
int main(){
    int angle,s1,s2,s3;
    printf("\nFirst Side:");
    scanf("%d",&s1);
    printf("\nSecond Side:");
    scanf("%d",&s2);
    printf("\nThird Side:");
    scanf("%d",&s3);
    if (s1==s2==s3)
    {
        printf("\nEquilateral Triangle");
    }
    else if (s1==s2 || s1==s3 ||s2==s3 )
    {
        printf("\nIsocelous Triangle");
    }
    else 
    {
        printf("\nScalene Triangle");
    }











    return 0;

}