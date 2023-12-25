//A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence (Fi = Fi-1 + Fi-2). WAP to find out the value of nth term of the Fibonacci sequence by writing a suitable user defined function. 

#include <stdio.h>

int fibNum(int count, int a, int b);

int main()
{
    int count;
    printf("Enter the Fibonacci term serial number: ");
    scanf("%d", &count);

    if (count <= 0)
    {
        printf("Invalid input. Please enter a positive integer.");
        return 1;
    }

    int result = fibNum(count, 0, 1);
    printf("The number at position %d is %d", count, result);
    return 0;
}

int fibNum(int count, int a, int b)
{
    if (count == 1)
    {
        return a;
    }
    else if (count == 2)
    {
        return b;
    }
    else
    {
        return fibNum(count - 1, b, a + b);
    }
}
