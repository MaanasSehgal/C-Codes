// WAP by designing a recursive function to calculate the sum of the digits of any given integer until it becomes a single digit number.

#include <stdio.h>

int findSum(int num)
{
    int lastDigit = 0, sum = 0;
    while (num != 0)
    {
        lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }
    if (sum < 10)
    {
        return sum;
    }
    else
    {
        findSum(sum);
    }
}

int main()
{
    int num;

    printf("Enter the number to find sum of digits till single digit: ");
    scanf("%d", &num);

    int sum = findSum(num);

    printf("The sum is: %d", sum);
    return 0;
}