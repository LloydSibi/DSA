/***************************************************
* File           : exp_2_36.c
* Description    : C Program to print a Calendar
* Author         : Lloyd Sibi
* Version        : 1.0
* Date           : 08/08/2021
* **************************************************/
#include<stdio.h>
int main(){

    int NoofDays,startDay,i,date=1;
    printf("Enter the number of days in a month: ");
    scanf("%d",&NoofDays);

    printf("Enter First Day Start from<0-Mon....5-sat & 6-sun> End with Sunday:\n");
    scanf("%d",&startDay);

    printf("\nMON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
    printf("__________________________________________________________\n");

    for(i=0;i<startDay;i++){
        printf("\t");
    }

    while(date<=NoofDays){
        if(startDay!=0){
            if(startDay%7==0){
                printf("\n");
            }
        }

        printf("%d\t",date);
        date=date+1;
        startDay=startDay+1;

    }
    return 0;
}