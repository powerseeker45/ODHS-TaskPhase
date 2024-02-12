#include <stdio.h>

void main()
{
    int n,count=0,d1=5,d2=11;
    printf("enter integer : ");
    scanf ("%d",&n);

    for (int i=0;i<n;i++)
    {
        if ((i%d1==0)&&(i%d2==0))
            count++;
    }

    printf("\nnumber of integers less than %d and divisible by %d and %d = %d",n,d1,d2,count);
}