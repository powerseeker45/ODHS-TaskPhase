#include <stdio.h>
void main()
{
    int n=4,i,j;
    int k=n;
    for (i=0;i<n;i++)
    {
        for (j=k;j>0;j--)
            printf("*");
        printf("\n");
        k--;

    }
}