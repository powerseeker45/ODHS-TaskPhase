
#include <stdio.h>
typedef struct employee
{
    char name[50];
    int age;
    int yoj;
    int expe;
}employee;
int calculateExperience(int year)
{
    int thisyear=2023;

    return (thisyear-year);
}

int main() {
    
   employee e[3];
   int max=2;
   
   for (int i=0;i<max;i++)
   {
        printf("enter %dth employee ",i+1);
       printf("Name: ");
        scanf("%s", e[i].name);

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Year of Joining: ");
        scanf("%d", &e[i].yoj);

        // Calculate experience
        e[i].expe = calculateExperience(e[i].yoj);
        printf("\n");
   }

  printf("Employee Details:\n");
    for (int i = 0; i < max; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Age: %d\n", e[i].age);
        printf("Year of Joining: %d\n", e[i].yoj);
        printf("Experience: %d years\n", e[i].expe);
        printf("\n");
    }

    return 0;
}