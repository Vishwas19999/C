#include<stdio.h>
int main()
{
int a[20],i,size,large;
printf("enter size of array:");
scanf("%d",&size);
printf("enter array elements:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for(i=0;i<size;i++)
{
if(a[i]>large)
large=a[i];
}
printf("largest element in array is:%d\n",large);
}
