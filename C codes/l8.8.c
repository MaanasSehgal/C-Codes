// WAP to display this series (3 in a single loop) 0 1 1 2 4 7 13 24

#include <stdio.h>

int main()
{
    int count, a = 0, b = 1, c = 1, nextNum = 0;

    printf("Enter a number: ");
    scanf("%d", &count);
    if (count == 0)
    {
    }
    else if (count == 1)
    {
        printf("%d ", a);
    }
    else if (count == 2)
    {
        printf("%d %d ", a, b);
    }
    else if (count >= 3)
    {
        printf("%d %d %d ", a, b, c);
        for (int i = 4; i <= count; i++)
        {
            nextNum = a + b + c;
            printf("%d ", nextNum);
            a = b;
            b = c;
            c = nextNum;
        }
    }
    else
    {
        printf("Please enter a valid number");
    }
    return 0;
}
