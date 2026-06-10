
//Write a program to count digits in a number

#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    long long originalNum = num;

    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) {
            num = -num;
        }

        while (num > 0) {
            num /= 10; 
            count++;   
        }
    }

    printf("The number of digits in %lld is: %d\n", originalNum, count);

    return 0;
}
