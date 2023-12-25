#include <stdio.h>

int main()
{
    int num;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        // upper pattern
        for (int i = 0; i <= num; i++)
        {
            for (int j = num; j > i; j--)
            {
                printf(" ");
            }
            for (int k = 0; k < i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
        // middle strip
        for (int i = 0; i < (num / 2) + 1; i++)
        {
            for (int j = 0; j < num - 1; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }

        // lower pattern
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (int k = i; k < num; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;                             
}
  