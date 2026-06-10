
//Write a program to find largest prime factor.

#include <stdio.h>

int main() {
    long long n, originalNum;
    long long maxPrime = -1;

    printf("Enter a positive integer: ");
    scanf("%lld", &n);

    originalNum = n;

    if (n <= 1) {
        printf("No prime factors for %lld.\n", originalNum);
        return 0;
    }

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    if (n > 2) {
        maxPrime = n;
    }

    printf("The largest prime factor of %lld is: %lld\n", originalNum, maxPrime);

    return 0;
}