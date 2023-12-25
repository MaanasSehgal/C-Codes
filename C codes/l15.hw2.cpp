// WAP by designing a recursive function to calculate the sum of the digits of any given integer until it becomes a single digit number using function.

#include <stdio.h>

int calcSum(int num, int sum);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d is the single digit sum of the given number", calcSum(num, 0));
    return 0;
}

int calcSum(int num, int sum)
{
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    if (sum >= 10)
    {
        calcSum(sum, 0);
    }
    else
    {
        return sum;
    }
}