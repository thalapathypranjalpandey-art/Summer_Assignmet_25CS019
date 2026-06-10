
//write a program to check weather the number is palindrome 

#include <stdio.h>

int main() {
    long long num, originalNum;
    long long reversedNum = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    originalNum = num;

    if (num < 0) {
        printf("%lld is not a palindrome number.\n", originalNum);
        return 0;
    }

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%lld is a palindrome number.\n", originalNum);
    } else {
        printf("%lld is not a palindrome number.\n", originalNum);
    }

    return 0;
}