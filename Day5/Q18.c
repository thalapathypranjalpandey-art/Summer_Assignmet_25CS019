
//Write a program to check strong number.

#include <stdio.h>

int main() {
    long long num, originalNum;
    long long sum = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    originalNum = num;

    if (num <= 0) {
        printf("%lld is not a strong number.\n", num);
        return 0;
    }

    while (num > 0) {
        int remainder = num % 10;
        long long factorial = 1;

        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }

        sum += factorial;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%lld is a strong number.\n", originalNum);
    } else {
        printf("%lld is not a strong number.\n", originalNum);
    }

    return 0;
}