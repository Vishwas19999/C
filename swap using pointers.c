#include<stdio.h>
int main()
{
int s=10,v=20,*p1,*p2;
p1=&s;
p2=&v;
printf("before swapping *p1=%d and *p2=%d\n",*p1,*p2);
*p1=*p1+*p2;
*p2=*p1-*p2;
*p1=*p1-*p2;
printf("after swapping *p1=%d and *p2=%d\n",*p1,*p2);
}
