
//Write a program to find lcm of two numbers.

#include <stdio.h>

int main() {
    int n1, n2, originalN1, originalN2, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    originalN1 = n1;
    originalN2 = n2;

    if (n1 < 0) n1 = -n1;
    if (n2 < 0) n2 = -n2;

    int a = n1;
    int b = n2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    gcd = a;

    if (gcd == 0) {
        lcm = 0;
    } else {
        lcm = (n1 * n2) / gcd;
    }

    printf("The LCM of %d and %d is: %d\n", originalN1, originalN2, lcm);

    return 0;
}