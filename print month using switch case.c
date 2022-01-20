#include<stdio.h>
int main()
{
int month;
printf("enter month number:");
scanf("%d",&month);
switch(month)
{
case 1:
printf("month 1 is January");
break;
case 2:
printf("month 2 is Febuary");
break;
case 3:
printf("month 3 is March");
break;
case 4:
printf("month 4 is April");
break;
case 5:
printf("month 5 is May");
break;
case 6:
printf("month 6 is June");
break;
case 7:
printf("month 7 is July");
break;
case 8:
printf("month 8 is August");
break;
case 9:
printf("month 9 is September");
break;
case 10:
printf("month 10 is October");
break;
case 11:
printf("month 11 is November");
break;
case 12:
printf("month 12 is December");
break;
default:
    printf("enter number is not available");
}
}
