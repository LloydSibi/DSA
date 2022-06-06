#include<stdio.h>
int main(){
    float temp;
    printf("\nEnter Temperature in centigrade:");
    scanf("%f",&temp);
if (temp<0)
{
    printf("\nFreezing weather");
}
else if(temp>0 && temp<=9.9)
{
    printf("\nVery Cold weather");
}
else if(temp>9.9 && temp<=19.9)
{
    printf("\nCold temperature");

}
else if(temp>19.9 && temp<=29.9)
{
    printf("\nNormal in temperature");
}
else if(temp>29.9 && temp<=39.9)
{
    printf("\nHot temperature");
}
else 
{
    printf("\nVery hot");
}
  return 0;
}




  