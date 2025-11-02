#include<stdio.h>
int main(){
    int binaryNumber, decimalNumber = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);
    int originalBinary = binaryNumber;

    while(binaryNumber > 0){
        remainder = binaryNumber % 10;
        decimalNumber = decimalNumber + remainder * base;
        binaryNumber = binaryNumber / 10;
        base = base * 2;
    }

    printf("%d : %d", originalBinary, decimalNumber);

    binaryNumber = 0;
    decimalNumber = 0;
    base = 1;
    remainder = 0;
    originalBinary = 0;

    printf("\nEnter a decimal number: ");
    scanf("%d", &decimalNumber);
    int originalDecimal = decimalNumber;
    while(decimalNumber > 0){
        remainder = decimalNumber % 2;
        binaryNumber = binaryNumber + remainder * base;
        decimalNumber = decimalNumber / 2;
        base = base * 10;
    }
    printf("%d : %d", originalDecimal, binaryNumber);
    return 0;
}