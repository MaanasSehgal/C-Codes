// WAP to find out reverse of a number.

#include <stdio.h>

int main()
{
    int num, remainder, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        // 2345

        remainder = num % 10;
        printf("%d", remainder);
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number = %d", reverse);
    return 0;
}