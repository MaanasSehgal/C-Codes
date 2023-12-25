// WAP to find the nth Fibonacci number using recursion.
#include <stdio.h>

int fibNum(int n, int a, int b)
{
    if (n == 2)
    {
        return b;
    }
    else if (n <= 1)
    {
        return a;
    }
    else
    {
        fibNum(n - 1, b, a + b);
    }
}
int main()
{
    int n;

    printf("Enter the value of n for which you want to find Fibonacci number: ");
    scanf("%d", &n);

    int ans = fibNum(n, 0, 1);

    printf("The nth term for Fibonacci series is: %d", ans);
    return 0;
}