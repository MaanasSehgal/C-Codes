// Write a function that will return the counting of Zeros in a Positive Integer

#include <stdio.h>

int returnZeros(int num, int count);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The number of zeroes are: %d", returnZeros(num, 0));
    return 0;
}

int returnZeros(int num, int count)
{
    if (num == 0)
    {
        return count;
    }

    if (num % 10 == 0)
    {
        count++;
    }

    returnZeros(num / 10, count);
}