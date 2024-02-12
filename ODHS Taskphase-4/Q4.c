#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    char a[50];
    int count_alpha=0,count_digit=0,count_special=0;
    printf("enter string :- ");
    gets(a);

    for (int i=0;a[i]!='\0';i++)
    {
        if ((a[i]>64&&a[i]<91)||(a[i]>96&&a[i]<123))
            count_alpha++;
        else if ((a[i]>47&&a[i]<58))
            count_digit++;
        else
            count_special++;
    

    }

    printf("\n alpha count =%d",count_alpha);
    printf("\n digit count =%d",count_digit);
    printf("\n special count =%d",count_special);

}