// The first few numbers of the Lucas sequence which is a variation on the Fibonacci sequence are:
// 1 3 4 7  11  18  29  …
// WAP to generate the Lucas sequence.

#include <stdio.h>

int main()
{
    int count, a = 1, b = 3, nextNum = 0;
    printf("Enter the number of iterations for Lucas sequence: ");
    scanf("%d", &count);

    if (count == 0)
    {
    }
    else if (count >= 0)
    {
        printf("%d ", a);
        nextNum = b;
        for (int i = 1; i <= count; i++)
        {
            printf("%d ", nextNum);
            nextNum = a + b;
            a = b;
            b = nextNum;
        }
    }
    else
    {
        printf("Please enter a valid number");
    }
    return 0;
}