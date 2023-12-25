#include <stdio.h>

int main()
{
    int num, check = 3, count = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = num - 1; j >= i; j--)
        {
            printf("  ");
        }
        for (int j = 1; j <= count; j++)
        {
            if (check % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            check++;
        }
        count += 2;
        check++;
        printf("\n");
    }
    // lower half
    check = 3;
    // count = 1;
    for (int i = num - 1; i >= 1; i--)
    {
        for (int j = i; j <= num - 1; j++)
        {
            printf("  ");
        }
        // reverse
        for (int j = count - 4; j >= 1; j--)
        {
            if (check % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            check++;
        }
        count -= 2;
        check++;
        printf("\n");
    }
    // for (int i = 1; i <= num * 2 - 2; i++)
    // {
    //     for (int j = 1; j <= num - 1; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
}