#include <stdio.h>
void main()
{
    int a,d,len,s=0,no_of_sticks=0;
    printf("enter smallest length : ");
    scanf("%d",&a);
    printf("\nenter common difference : ");
    scanf("%d",&d);
    printf("\nenter length : ");
    scanf("%d",&len);
    int i=0;
    while(1)
    {
        
        if(s>=len)
            break;
        
        s+=a+i*d;
        i++;
        
    }
    no_of_sticks=i;

    printf("minimum number of sticks = %d of total length %d",no_of_sticks,s);
}