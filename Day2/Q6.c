
//Write a program to reverse a number 

#include <stdio.h>

int main() {
    long long num, originalNum;
    long long reversedNum = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    originalNum = num;

    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (isNegative) {
        reversedNum = -reversedNum;
    }

    printf("Original number: %lld\n", originalNum);
    printf("Reversed number: %lld\n", reversedNum);

    return 0;
}