#include<stdio.h>
int main()
{
int i,*a,j,size,temp;
printf("enter size:");
scanf("%d",&size);
printf("enter array elements:");
for(i=0;i<size;i++)
{
scanf("%d",a+i);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(*(a+i)>*(a+j))

{
temp=*(a+i);
*(a+i)=*(a+j);
*(a+j)=temp;
}
}
}
printf("after sorting:");
printf("\n");
for(i=0;i<size;i++)
{
 printf("%d\n",*(a+i));
}
}
