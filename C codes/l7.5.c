// WAP to find out sum of digits of a number.
#include <stdio.h>

int main()
{
    int num, sum = 0, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }

    printf("Sum is %d", sum);
    return 0;
}
