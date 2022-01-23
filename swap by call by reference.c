#include<stdio.h>
void swap(int* , int*);

int main()
{
int a=40;
int b=60;
printf("before swapping :a=%d and b=%d\n",a,b);
swap(&a,&b);
printf("after swapping :a=%d and b=%d\n",a,b);
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("after swapping :a=%d and b=%d\n",*a,*b);
}
