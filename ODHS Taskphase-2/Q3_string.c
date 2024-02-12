#include <stdio.h>
#include <string.h>
void main()
{
    int j,i;
    char s[50],a[50],rev[50];
    printf("enter string : ");
    gets(s);
    

    int len;
    len=strlen(s);
    for(i=0;i<len;i++)
        rev[i]=s[len-1-i];
    rev[i]='\0';
    if (strcmp(s,rev)==0)
    {
        printf("pallindrome");

    }
    else
        printf("not pallindrome");    
}
