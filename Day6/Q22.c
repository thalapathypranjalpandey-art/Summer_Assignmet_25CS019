
//Write a program to convert binary to decimal.

#include <stdio.h>

int main() {
    long long binary, temp;
    int decimal = 0;
    int base = 1;
    int remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal equivalent of %lld is: %d\n", temp, decimal);

    return 0;
}
