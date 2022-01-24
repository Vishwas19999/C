#include<stdio.h>
#include<string.h>
int main()
{
    char *s;
    int l,i;
    printf("enter a string:");
    gets(s);
    l=strlen(s);
    for(i=l;i>=0;i--)
    {
        printf("%c",*(s+i));
    }
//printf("after reversing s=%s",c);
}
