#include <stdio.h>
 int main()
 {
     char name[100];
     int csmrid;//CUSTOMER ID
     float unit,amount;

     printf("\nEnter the name of customer: ");
     scanf("%s",&name);
     printf("Enter the customer id : ");
     scanf("%d",&csmrid);
     printf("Total units consumed : ");
     scanf("%f",&unit);

     if (unit <= 199)
     {
         amount=unit*1.20;
     }
     else if( unit<400)
     {
         amount=unit*1.5;
     }
     else if( unit<600)
     {
         amount= unit*1.80;
     }
     else 
     {
         amount=2.0*unit;
     }
     if (amount<100)
     {
         amount=100;
     }
     if(amount>400)
     {
         amount += amount*0.15;
     }
     printf(" \nName of the customer : %s",name);
     printf("\nCustomer ID : %d",csmrid);
     printf("\nAmount is : %.2f",amount);
     return 0;
 }