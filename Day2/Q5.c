
//Write a program to find sum of digits of a number

#include <stdio.h>

int main() {
    long long num, originalNum;
    int sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    originalNum = num;

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        remainder = num % 10; 
        sum += remainder;     
        num /= 10;            
    }

    printf("The sum of the digits of %lld is: %d\n", originalNum, sum);

    return 0;
}