
//Write a program to check armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    long long num, originalNum, temp;
    long long sum = 0;
    int digits = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    originalNum = num;

    if (num < 0) {
        printf("%lld is not an Armstrong number.\n", originalNum);
        return 0;
    }

    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += round(pow(remainder, digits));
        temp /= 10;
    }

    if (sum == originalNum) {
        printf("%lld is an Armstrong number.\n", originalNum);
    } else {
        printf("%lld is not an Armstrong number.\n", originalNum);
    }

    return 0;
}