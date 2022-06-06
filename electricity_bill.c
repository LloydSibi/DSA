#include<stdio.h>
int main() {
int id;
char name[10];
float unit,charge,u0,u1,u2,u3,u4,u5,u6;
printf("\nCustomer Id");
 scanf("%d",&id);
printf("\nName:");
 scanf("%s",&name);
printf("\nUnits Consumed:");
 scanf("%f",&unit);
  u0=100.00;
  u1=unit*1.20;
  u2=unit*1.50;
  u3=unit*1.82;
  u4=unit*2.00;
  u5=u3+0.15*u3;
  u6=u4+0.15*u4;
  if (unit<=83.33)
  {
      printf("\nBill amount:%1f",&u0);
  }
  else if (unit>83.5 && unit<199.00)
  {
      printf("\nBill:Rs %1f",&u1);
  }
  else if (unit>=199.00 && unit<400.00)
  {
      printf("\nBill:Rs %1f",&u2);
  }
  else if(unit>=400.00 && unit<600.00)
  {
      printf("\nBill Amount:Rs %1f",&u3);
  }
  else if(unit>400.00 && unit<600.00)
  {
      printf("\nBill:%1f",&u5);
  }
  else if(unit>600.00)
  {
      printf("\nBill:%1f",&u6);
  }
  else
  {
      printf("\nBill Amount:Rs %1f",&u4);
  }




    








    





    return 0;
}