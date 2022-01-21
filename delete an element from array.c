#include<stdio.h>
int main()
{
int a[20],i,size,pos;
printf("enter the size of array:\n");
scanf("%d",&size);
printf("enter the elements of array:\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the pos to delete an element:\n");
scanf("%d",&pos);
for(i=pos-1;i<size;i++)
{
a[i]=a[i+1];
}
printf("final array will be:\n");
for(i=0;i<size-1;i++)
{
printf("%d\n",a[i]);
}
}


