#include<stdio.h>
int main() {
    int a[10],i,j,min,temp,n,count=0;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    count++;
    }
    i=0;
    count++;
    while(i<n)
    {
        min=i;
        j=i+1;
        count++;
        while(j<n)
        {
            if(a[j]<a[min]){
                min=j;
                count++;
            }
                j=j+1;
            count++;
        

    }
    temp=a[i];
    count++;
    a[i]=a[min];
    count++;
    a[min]=temp;
    count++;
    i++;
    count++;}
    
    printf("Sorted array is:");
    count++;
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
        count++;

    }
    count++;
    printf("Time Complexity=%d",count);
    
}


