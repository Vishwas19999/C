#include<stdio.h>
int main()
{
    float phy,che,bio,math,comp;
    float total,percentage,avg;
    char grade;
    printf("enter marks of 5 subjects:");
    scanf("%f%f%f%f%f",&phy,&che,&bio,&math,&comp);

    total=phy+che+bio+math+comp;
            percentage=(total/500)*100;
            avg=total/5;

    if(avg>=90)
        grade = 'A';
    else if(avg>=80 && avg<90)
        grade = 'B';
    else if(avg>=70 && avg<80)
        grade = 'C';
    else if(avg>=60 && avg<70)
        grade = 'D';
    else if(avg>=40 && avg<60)
        grade = 'E';
    else
        grade = 'F';

            printf("total marks is:%f\n",total);
            printf("percentage is:%f\n",percentage);
            printf("the grade is:'%c'\n",grade);

}
