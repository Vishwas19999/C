#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
printf("largest number is :%d\n",a);
}
else if(b>c)
{
printf("largest number is :%d\n",b);
}
else
printf("largest number is :%d\n",c);
}
