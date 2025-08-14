#include <stdio.h>
int addition(int a, int b) {
    return a + b;
}
int multiplication(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int sum = addition(num1, num2);
    int product = multiplication(num1, num2);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
