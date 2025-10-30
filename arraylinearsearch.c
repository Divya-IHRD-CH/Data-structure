#include<stdio.h>
void main()
{
int a[50],i,n,key,flag=0;
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("\n %d Found at position %d",key,i=i+1);
flag=1;
break;
}}
if(flag==0)
{
printf(" element not found");
}} 
