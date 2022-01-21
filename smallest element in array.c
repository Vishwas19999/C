#include<stdio.h>
int main()
{
int a[20],i,size,small;
printf("enter size of array:");
scanf("%d",&size);
printf("enter array elements:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
small=a[0];
for(i=0;i<size;i++)
{
if(a[i]<small)
small=a[i];
}
printf("smallest element in array is:%d\n",small);
}
