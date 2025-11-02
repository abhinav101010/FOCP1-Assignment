#include <stdio.h>

void swapWithTemp(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("using temp variable: a = %d, b = %d\n", a, b);
}

void swapWithArithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("using arithmetic: a = %d, b = %d\n", a, b);
}


void swapWithPointers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nOriginal values: a = %d, b = %d\n\n", num1, num2);

    swapWithTemp(num1, num2);
    swapWithArithmetic(num1, num2);
    swapWithPointers(&num1, &num2);

    printf("using pointers: a = %d, b = %d\n", num1, num2);

    return 0;
}
