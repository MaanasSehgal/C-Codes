// print this pattern of inverted full pyramid

#include <stdio.h>

int main()
{
    int num, count;

    printf("Enter a number: ");
    scanf("%d", &num);

    count = (2 * num) - 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = count; k >= 1; k--)
        {
            printf("*");
        }
        printf("\n");
        count -= 2;
    }
    return 0;
}