#include<stdio.h>
int main(){
  int  arr[10],i,j,size,swap;
  printf("Enter the size of array:\n");
  scanf("%d",&size);
  printf("Enter the elements:");
  for(i=0;i<size;i++)

  scanf("%d",&arr[i]);
  for(i=0;i<size-1;i++){
   for(j=0;j<size-i-1;j++){
  
  
  
  
  
  if (arr[j]>arr[j+1])
  {
    swap =arr[j];
    arr[j]=arr[j+1];
    arr[j+1]= swap;
  }
  }
  }
  
    printf("Sorted elements are:\n");
  for(i=0;i<size;i++)
    printf("%d\n",arr[i]);
  
  
  return 0;
}