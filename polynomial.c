struct poly{
int expo;
int coeff;
};
#include<stdio.h>
int main(){
int i,t;
struct poly p[10];
printf("\nEnter the number of terms :");
scanf("%d",&t);
for(i=0;i<t;i++){
printf("\nEnter the coeffecient of %d term :",i+1);
scanf("%d",&p[i].coeff);
printf("\nEnter the exponent of %d term :",i+1);
scanf("%d",&p[i].expo);
}

for(i=0;i<t;i++){
printf("%d(x^%d)",p[i].coeff,p[i].expo);
if(i!=t-1){
printf("+");
}
}



return 0;
}