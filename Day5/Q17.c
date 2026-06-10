
//Write a program to check perfect number.

#include <stdio.h>

int main() {
    long long num;
    long long sum = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num <= 0) {
        printf("%lld is not a perfect number.\n", num);
        return 0;
    }

    for (long long i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%lld is a perfect number.\n", num);
    } else {
        printf("%lld is not a perfect number.\n", num);
    }

    return 0;
}