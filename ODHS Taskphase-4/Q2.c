#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void display(int a[][50],int m,int n)
{
   for(int i=0;i<m;i++)
    {
        printf("\n");
        for (int j=0;j<n;j++)
        {

            printf("%d\t",a[i][j]);
        }
    }


}

void transpose(int a[][50], int m,int n)
{
    int b[50][50];
    for(int i=0;i<m;i++)
    {
        
        for (int j=0;j<n;j++)
        {

            b[j][i]=a[i][j];
        }
    }
    printf("\n transpose : \n");
    display(b,n,m);



    
}
int main()
{
    int m,n;
    int a[50][50];

    printf("\nenter row order :-");
    scanf("%d",&m);

    printf("\nenter col order :-");
    scanf("%d",&n);

    for(int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("enter a[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    display(a,m,n);
    transpose(a,m,n);

    




    
}
