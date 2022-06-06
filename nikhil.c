#include<stdio.h>
int main(){
    int array[10],n,s,i,flag=0,count=0;
    printf("\nEnter the size of the array");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&s);

    for(i=0;i<n;i++){
        if(array[i]==s){
            flag=1;
            break;

        }
    }
    if(flag==1){
        printf("the element %d found at the position %d",s,i);

    }
    else{
        printf("element is not found");
    }
    return 0;
}