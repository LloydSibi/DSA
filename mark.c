/***************************************************
* File           : Marks aggregate.c
* Description    : C Program for calculating marks in % and tp find aggregate.
* Author         : Lloyd Sibi
* Version        : 1.0
* Date           : 08/08/2021
* **************************************************/
#include<stdio.h>
 int main(){
 int m1,m2,m3,m4,m5,aggr;
  float percentage;
  printf("\nEnter the marks ontained in 5 different subjects:");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
aggr=m1+m2+m3+m4+m5;
percentage=aggr/5;
  printf("Aggregate marks=%d\n",aggr);
  printf("Percentage=%f\n",percentage);
return 0;
}









    

