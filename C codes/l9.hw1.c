#include <stdio.h>

int main()
{
    int num, count = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = num - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= count; j++)
        {
            printf("*");
        }
        printf("\n");
        count += 2;
    }
    return 0;
}