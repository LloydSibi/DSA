/***************************************************
* File           : exp_2_33.c
* Description    : C Program for palindromic pattern printing in a half diamond
* Author         : Lloyd Sibi
* Version        : 1.0
* Date           : 08/08/2021
* **************************************************/
#include<stdio.h>
int main(){
    int num,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    for (i=1;i<num;i++){    
        printf("* ");
        for (j=1;j<i;j++){          
                printf("%d ",(j));
        }
        if (j>2){                   
            for (k=2;k<j;k++){
                printf("%d ",(j-k));
            }
        }
        if (i>1){
        printf("*");
        }
        printf("\n");
    }
    for (i=1;i<(num-1);i++){                    
        printf("* ");
        for (j=1;j<((num-1)-i);j++){           
            printf("%d ",j);
        }
        for (k=2;k<j;k++){                       
            printf("%d ",j-k);
        }
        if (i<(num-2)){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}