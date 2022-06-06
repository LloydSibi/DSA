/***************************************************
* File           : exp_2_33.c
* Description    : C Program to print distance in km,m,inch,feet
* Author         : Lloyd Sibi
* Version        : 1.0
* Date           : 23/08/2021
* **************************************************/
#include<stdio.h>
int main(){ 
 float km,m,inch,cm,feet;
  printf("\nEnter distance between two cities in km:");
  scanf("%f",&km);
 m=km*1000;
 cm=km/1000;
 inch=cm/2.54;
 feet=inch/12;
  printf("\nThe distance in meteres=%f",m);
  printf("\nThe distance in inches=%f",inch);
  printf("\nThe distance in feet=%f",feet);
 return 0;
}







    
