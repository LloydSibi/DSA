#include <stdio.h>
int main(){
    int a[10],i,j,temp,min,n,count=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);


    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        count++;
    }
    i=0;
    count++;
    while(i<n){
        min=i;
        j=i+1;
        count++;
        while(j<n){
            if(a[j]<a[min]){
                min=j;
                count++;
                
            }
            j++;
            count++;
        }
        temp=a[i];
        count++;
        a[i]=a[min];
        count++;
        a[min]=temp;
        count++;
        i++;
        count++;
    }
    printf("The sorted array is:");
    count++;
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
        count++;
    }
    count++;
    printf("\nTime complexity =%d",count);

    
    }