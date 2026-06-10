
//WRITE a program to calculate sum of first N natural numbers.

#include<stdio.h>
int main()
{
    int n, i, sum;
    sum=0;
    printf("enter the natural number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("the sum is:%d\n", sum);

    return 0;

}