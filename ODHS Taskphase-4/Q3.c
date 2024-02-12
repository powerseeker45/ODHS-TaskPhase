#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(char repeating[],int l,char c)
{
    for (int i=0;i<=l;i++)
    {
        if (repeating[i]==c)
            return true;
        return false;
    }
}
void main()
{

    char a[100],non_repeating[50],repeating[50];
    char c;

    int i, count;
    printf("\n enter string : - ");
    gets(a);
    int j=0;
    for ( i=0;a[i]!='\0';i++);
    int len=i,k=0,l=0;

    for (i=0;i<len;i++)
    {
        count=-1;
        for (j=i;a[j]!='\0';j++)
        {
            if (a[i]==a[j])
            {
                count++;
            }

        }
        if (count>0&&!search(repeating,l,a[i]))
        {
            printf("\n %c is repeating word with frequency %d",a[i],count+1);

            repeating[l++]=a[i];
        }

        else if (!search(repeating,l,a[i]))
        {
            non_repeating[k++]=a[i];
        }
    }
    repeating[l]='\0';
    non_repeating[k]='\0';
    printf("\nnon repeating words : ");
    for (i=0;i<k;i++)
    {
        printf("\t%c",non_repeating[i]);
    }




}