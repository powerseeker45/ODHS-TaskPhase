#include <stdio.h>
void main()
{
    int n,rev=0,temp,r;
    printf("enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;

    }
    printf("reverse : %d\n",rev);

    if (rev==n)
        printf("pallindrome");
    else
        printf("not pallindrome");    
}

