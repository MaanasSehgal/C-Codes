// WAP to print Fibonacci series up to n terms:
//  0 1 1 2 3 5 8 13 21...

#include <stdio.h>

int main()
{
    int count, a = 0, b = 1, nextNum = 0;

    printf("Enter the number of iterations for Fibonacci series: ");
    scanf("%d", &count);
    if (count == 0)
    {
    }
    else if (count == 1)
    {
        printf("%d ", a);
    }
    else if (count >= 1)
    {
        printf("%d %d ", a, b);
        for (int i = 3; i <= count; i++)
        {
            nextNum = a + b;
            printf("%d ", nextNum);
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
