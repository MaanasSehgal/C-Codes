// WAP to find the largest between the 6 numbers.
#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, num6, max;
    printf("Enter six numbers: ");
    scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);
    max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }
    if (num5 > max)
    {
        max = num5;
    }
    if (num6 > max)
    {
        max = num6;
    }

    printf("%d is the largest", max);
    return 0;
}

