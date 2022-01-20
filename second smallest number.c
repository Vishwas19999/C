#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
if(a<b && a<c)
{
if(b<c)
{
printf("second smallest is b=%d",b);
}
else
    printf("second smallest is c=%d",c);
}
else if(b<a && b<c)
{
if(a<c)
{
    printf("second smallest is a=%d",a);
}
else
    printf("second smallest is c=%d",c);
}
else if(a<b)
{
    printf("second smallest is a=%d",a);
}
else
    printf("second smallest is b=%d",b);
}
