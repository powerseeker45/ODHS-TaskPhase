#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 int main()
 {
    int a[50];

    int max,d;

    printf("enter maximum size : ");
    scanf("%d",&max);
    printf("\nenter array\n");

    for (int i=0;i<max;i++)
    {
        printf("\nenter %d input:- ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nenter number of times to be rotated :- ");
    scanf("%d",&d);

    for (int i=max;i>=0;i--)
    {
        a[i+d]=a[i];
    }

    /*for (int i=max-1+d,j=d-1;i>max;i--,j--)
    {
        a[d]=a[i];   
    }*/

    for (int i=0;i<d;i++)
    {
        a[i]=a[max+i];
    }

    


    printf("\nprinting updated array :- ");
    for(int i=0;i<max;i++)
    {
        printf("\t%d",a[i]);
    }
 }