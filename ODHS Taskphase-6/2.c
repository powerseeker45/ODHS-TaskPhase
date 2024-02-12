#include <stdio.h>


int intToBinary(int n, char binary[]) {
    int isEven = 0; 
    int index = 0;

    if (n % 2 == 0) {
        isEven = 1;
    }


    while (n > 0) {
        binary[index++] = (n % 2) + '0';
        n = n / 2;
    }
    binary[index] = '\0'; 

    return isEven;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    char binary[50]; 

    int isEven = intToBinary(n, binary);

    printf("Binary of %d is : %s\n", n, binary);

    if (isEven) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd \n", n);
    }

    return 0;
}
