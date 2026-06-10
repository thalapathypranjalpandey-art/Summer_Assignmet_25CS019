
//write a program to find the product of digits

#include <stdio.h>

int main() {
    long long num, originalNum;
    long long product = 1;
    int remainder;
    int hasDigits = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    originalNum = num;

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        product = 0;
    } else {
        while (num > 0) {
            remainder = num % 10;
            product *= remainder;
            num /= 10;
        }
    }

    printf("The product of the digits of %lld is: %lld\n", originalNum, product);

    return 0;
}