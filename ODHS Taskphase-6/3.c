#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    int *p1 = &a;
    int *p2 = &b;

    printf("Enter the 1st integer: ");
    scanf("%d", p1);

    printf("Enter the 2nd integer: ");
    scanf("%d", p2);

    printf("Before : a = %d, b = %d\n", a, b);

    
    swap(p1, p2);

    printf("After : a = %d, b = %d\n", a, b);

    return 0;
}
