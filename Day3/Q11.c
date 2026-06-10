
//Write a program to find gcd of two numbers.

#include <stdio.h>

int main() {
    int n1, n2, originalN1, originalN2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    originalN1 = n1;
    originalN2 = n2;

    if (n1 < 0) n1 = -n1;
    if (n2 < 0) n2 = -n2;

    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    printf("The GCD of %d and %d is: %d\n", originalN1, originalN2, n1);

    return 0;
}