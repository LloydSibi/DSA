#include<stdio.h>
int main(){
    int a[10],i,n,j,t;
    printf("\nEnter the size:");
    scanf("%d",&n);
    printf("\nEnter the elemnts");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    i=1;
    while(i<n){
        j=i;
        if(a[j]<a[j-1]){
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
            j--;
        }
        i++;

    }
    printf("The sorted array is");
     for(i=0;i<n;i++){
        printf("%d",a[i]);

    }


    return 0;
}