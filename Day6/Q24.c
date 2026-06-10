
//Write a program to find x^n without pow().

#include <stdio.h>

int main() {
    double base, result = 1.0;
    long long exp, originalExp;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lld", &exp);

    originalExp = exp;

    if (base == 0 && exp <= 0) {
        printf("Error: Math undefined (0 raised to a non-positive power).\n");
        return 0;
    }

    if (exp < 0) {
        base = 1.0 / base;
        exp = -exp;
    }

    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }

    printf("%.2lf^%lld = %.6lf\n", base, originalExp, result);

    return 0;
}

