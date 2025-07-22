#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int n;

    printf("Enter the n value: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Addition of two numbers is %d\n", a + b);
    } else if (n == 1) {
        printf("Subtraction of two numbers is %d\n", a - b);
    } else if (n == 2) {
        printf("Multiplication of two numbers is %d\n", a * b);
    } else if (n == 3) {
        if (b != 0) {
            printf("Division of two numbers is %d\n", a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        if (b != 0) {
            printf("Modulus of two numbers is %d\n", a % b);
        } else {
            printf("Error: Modulus by zero is not allowed.\n");
        }
    }

    return 0;
}
