#include<stdio.h>
void main()
{
int a[50],i,j,n,temp;
printf("enter the limit\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<(n-i-1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}}}
printf("the Sorted array is\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
