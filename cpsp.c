#include<stdio.h>
int main() {
    int cp,sp,profit,loss;
    printf("\nEnter Cost Price:");
     scanf("%d",&cp);
    printf("\nEnter Selling Price:");
     scanf("%d",&sp);
    profit=sp-cp;
    loss=cp-sp;
    if (sp>cp)
    {
        printf("\nThe seller has made a profit of Rs=%d",profit);
    }
    else
    {
        printf("\nThe seller has made a loss of Rs=%d",loss);
    }
     return 0;
}
    








   