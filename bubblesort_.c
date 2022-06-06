
#include<stdio.h>
int main()
{
int num,i,n,count;
count=0;
printf("Enter the array size:");
scanf("%d",&n);
int a[n];
count++;
printf("Enter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
count++;
}
count++;
printf("Enter the element to be searched:");
scanf("%d",&num);
count++;
for(i=0;i<n;i++)
{
count++;
if(a[i]==num)
{
count++;
printf("The number is present at position %d",i+1);
break;
}count++;
}count++;
if(i==n)
{
printf("The number is not present in the array");
count++;
}count++;
printf("\nTime Complexity = %d",count);
return 0;
}