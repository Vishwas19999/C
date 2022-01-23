#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int i,len,res;
int max=0;
int freq[256]={0};
printf("enter a string:");
gets(s);
len=strlen(s);
for(i=0;i<len;i++)
{
freq[s[i]]++;
}
for(i=0;i<len;i++)
{
if(max<freq[s[i]])
{
max=freq[s[i]];
res=s[i];
}
}
printf("maximum occuring characer is:%c",res);

}
