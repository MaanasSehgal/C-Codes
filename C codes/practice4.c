// 1, 2 1, 1 2 3, 4 3 2 1

#include <stdio.h>

int main()
{
    int num, count = 1, limit;

    printf("Enter a number: ");
    scanf("%d", &num);

    limit = num - 2;

    for (int i = 3; i <= num + 2; i++)
    {
        if (i % 2 == 0)
        {
            for (int l = limit; l >= 1; l--)
            {
                printf("  ");
            }
            // even
            for (int j = count; j >= 1; j--)
            {
                printf("%d ", j);
            }
            limit -= 2;
        }
        else
        {
            for (int l = num - 1; l >= 1; l--)
            {
                printf("  ");
            }
            // odd
            for (int j = 1; j <= count; j++)
            {
                printf("%d ", j);
            }
        }
        count++;
        printf("\n");
    }
}