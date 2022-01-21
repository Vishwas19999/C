#include<stdio.h>
#include<string.h>
int main()
{
char s[20];
int i,vowels=0,consonants=0,digits=0,space=0,len;
printf("enter a string:\n");
gets(s);

len=strlen(s);
for(i=0;i<len;i++)
{
if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A')
{
vowels++;
}
else
consonants++;
}
if(s[i]>='0' && s[i]<='9')
{
digits++;
}
if(s[i]==' ')
{
space++;
}
}
printf("vowels are:%d\n",vowels);
printf("consonants are:%d\n",consonants);
printf("digits are:%d\n",digits);
printf("space are:%d\n",space);
}
