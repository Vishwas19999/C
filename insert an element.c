#include<stdio.h>
int main()
{
int a[20],i,pos,size,num;
printf("enter size of array:\n");
scanf("%d",&size);
printf("enter the array elements:\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the pos to insert an element:\n");
scanf("%d",&pos);
printf("enter the number to insert:\n");
scanf("%d",&num);

for(i=size-1;i>=pos-1;i--)
{
a[i+1]=a[i];
a[pos-1]=num;
}
printf("final array will be:\n");
for(i=0;i<=size;i++)
{
printf("%d\n",a[i]);
}
}
