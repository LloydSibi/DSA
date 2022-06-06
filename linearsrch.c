#include<stdio.h>
int main(){
    int i,size,search,arr[20];
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Enter the element to be searched:\n");
    scanf("%d",&search);
    for(i=0;i<size;i++){
        if(arr[i] == search){
            printf("%d is found at location %d\n",search,i);
           
            
            break;
        }
        if(i == size){
            printf("%d is not found\n");
            break;
        }
    }
    return 0;
}