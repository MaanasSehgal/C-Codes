// 1, 2 1, 1 2 3, 4 3 2 1

#include <stdio.h>

int main()
{
    int num, count = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 3; i <= num + 2; i++)
    {
        if (i % 2 == 0)
        {
            // even
            for (int j = count; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }
        else
        {
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