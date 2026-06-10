
//Write a program to print armstrong numbers in a range.

#include <stdio.h>
#include <math.h>

int main() {
    long long start, end;

    printf("Enter the lower limit: ");
    scanf("%lld", &start);
    printf("Enter the upper limit: ");
    scanf("%lld", &end);

    printf("Armstrong numbers between %lld and %lld are:\n", start, end);

    if (start < 0) {
        start = 0;
    }

    for (long long i = start; i <= end; i++) {
        long long temp = i;
        long long sum = 0;
        int digits = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = i;
        while (temp > 0) {
            int remainder = temp % 10;
            sum += round(pow(remainder, digits));
            temp /= 10;
        }

        if (sum == i && i != 0) {
            printf("%lld ", i);
        } else if (i == 0 && sum == 0) {
            printf("0 ");
        }
    }
    printf("\n");

    return 0;
}