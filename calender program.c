#include<stdio.h>
#include<math.h>
int main()
{
int date,month,yr;
printf("enter the yr:");
scanf("%d",&yr);
printf("enter the month:");
scanf("%d",&month);
printf("enter the date:");
scanf("%d",&date);
day(date,month,yr);
return 0;
}
int day(int date,int month,int yr)
{
int day,year,yd;
year=year%100;
yd=yr/100;
printf("given date is:%d/%d/%d\n",date,month,yr);
day=1.25*year+calmonth(month,yr)+date-2*(yd%4);
day=day%7;
switch(day)
{
case 0:
printf("week day of date is:Saturday");
break;
case 1:
printf("week day of date is:Sunday");
break;
case 2:
printf("week day of date is:Monday");
break;
case 3:
printf("week day of date is:Tuesday");
break;
case 4:
printf("week day of date is:Wednesday");
break;
case 5:
printf("week day of date is:Thursday");
break;
case 6:
printf("week day of date is:Friday");
break;
default:
printf("data is not correct");
}
}
int calmonth(int month,int yrs)
{
int calmonth,lpyr;
if((yrs%100==0)&&(yrs%400!=0))
lpyr=0;
else if(yrs%4==0)
lpyr=0;
calmonth=3+(2-lpyr)*((month+2)/(2*month))+(5*month+month/9)/2;
calmonth=calmonth%7;
return calmonth;
}

