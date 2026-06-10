
//Write a program to recursive reverse number.

#include <stdio.h>
#include <math.h>

int reverse(int num, int digits) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) * pow(10, digits) + reverse(num / 10, digits - 1);
}

int main() {
    int num, temp, result;
    int digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    result = reverse(num, digits - 1);

    printf("Reversed number: %d\n", result);

    return 0;
}

