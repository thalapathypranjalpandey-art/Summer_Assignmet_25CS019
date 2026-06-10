
//Write a program to count set bits in a number.

#include <stdio.h>

int main() {
    int num, originalNum;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        num = num & (num - 1);
        count++;
    }

    printf("The number of set bits in %d is: %d\n", originalNum, count);

    return 0;
}