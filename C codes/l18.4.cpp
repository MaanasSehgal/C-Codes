// Write a recursive function to add the digits of a positive integer.
#include <stdio.h>

int sumOfDigits(int num, int sum)
{
    if (num == 0) return sum;

    sumOfDigits(num / 10, sum + (num % 10));
}

int main()
{
    int num;

    printf("Enter the number to find sum of digits: ");
    scanf("%d", &num);

    int sum = sumOfDigits(num, 0);

    printf("The sum of the digits is: %d", sum);
    return 0;
}