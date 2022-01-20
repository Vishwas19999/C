#include<stdio.h>
int main()
{
int i,row,j;
printf("enter the number of rows:");
scanf("%d",&row);
for(i=0;i<=row;i++)
{
for(j=0;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}

for(i=0;i<=row;i++)
{
    for(j=0;j<=i;j++)
    {
       printf("*");

    }
    printf("\n");
}


for(i=row;i>=0;i--)
{
    for(j=0;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("\n");

}
}


