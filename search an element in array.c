#include<stdio.h>
int main()
{
int a[100],i,size,found=0,ele;
printf("enter the size of array:\n");
scanf("%d",&size);
printf("enter the elements of array:\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to search :\n");
scanf("%d",&ele);
for(i=0;i<size;i++)
{
if(a[i]==ele)
{
    found=1;
    break;
}

}
if(found==1)
printf("%d is found at pos %d\n",ele);
else
  printf("the number is not found ",ele);

}
