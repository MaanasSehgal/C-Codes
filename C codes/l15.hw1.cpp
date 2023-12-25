// WAP to test whether a number entered through the keyboard is a number in the Fibonacci sequence or not. (Using function)

#include <stdio.h>
#include <stdbool.h>

bool fibNum(int num, int a, int b);

int main()
{
    int num, a = 0, b = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    bool ans = fibNum(num, a, b);
    if (ans == true)
    {
        printf("The number is in Fibonacci Series");
    }
    else
    {
        printf("The number is not in Fibonacci Series");
    }

    return 0;
}

bool fibNum(int num, int a, int b)
{
    if (num <= b)
    {
        return false;
    }
    else if (num == 0 || num == 1 || num == b)
    {
        return true;
    }
    else
    {
        return fibNum(num, b, a + b);
    }
}
