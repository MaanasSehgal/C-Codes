// WAP to count number of digits of a positive integer n by using a recursive function.
#include <stdio.h>

int countDigits(int num, int count)
{
    if (num == 0)
    {
        return count;
    }
    countDigits(num / 10, count + 1);
}

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int digitCount = countDigits(num, 0);

    printf("The number of digits in the number are: %d", digitCount);
    return 0;
}