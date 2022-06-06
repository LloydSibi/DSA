#include <stdio.h>
int main()
{
int n,i,j,count=0,arr[100],sp=24,position;
printf("Enter the size of array:");
scanf("%d",&n);
count ++;
printf("Enter the elements:\n");
sp=sp+n*4;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
count ++;
}
count ++;
for (i=0;i<n-1;i++)
{
position = i;
for(j=i+1;j<n;j++)
{
if (arr[position]>arr[j])
{
position=j;
count ++;
}
count ++;
if (position !=i)
{
swap=arr[i];
arr[i]=arr[position];
arr[position]=swap;
count = count+3;
}
count++;
}
count ++;
}
count ++;
printf("\nSorted array:\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
count ++;
}
count ++;
printf("Time complexity = %d",count);
printf("\nspace complexity = %d",sp);
return 0;
}