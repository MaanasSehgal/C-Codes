#include <stdio.h>

int main()
{
    int num, rows = 5, columns = 3;
    for (int i = 0; i <= 9; i++)
    {
        printf("Choose a number 0-9: ");
        scanf("%d", &num);

        switch (num)
        {
        case 0:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if (i == 1 || j == 1 || i == rows || j == columns)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 1:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if (j == (columns / 2) + 1)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 2:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if (i == 1 || i == rows || i == rows / 2 + 1 || (i <= rows / 2 + 1 && j == columns / 2 + 2) || (i >= rows / 2 + 1 && j == 1))
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 3:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if (i == 1 || i == rows || i == ((rows / 2) + 1) || j == columns)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 4:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if ((j == 1 && i <= rows / 2 + 1) || j == columns || i == rows / 2 + 1)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 5:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if (i == 1 || i == rows || i == rows / 2 + 1 || (i <= rows / 2 + 1 && j == 1) || (i >= rows / 2 + 1 && j == columns))
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 6:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if (i == 1 || i == rows || i == rows / 2 + 1 || j == 1 || (i >= rows / 2 + 1 && j == columns))
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 7:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if (i == 1 || j == columns)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 8:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if (i == 1 || i == rows || i == rows / 2 + 1 || j == 1 || j == columns)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 9:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= columns; j++)
                {
                    if (i == 1 || i == rows / 2 + 1 || j == columns || (i <= rows / 2 + 1 && j == 1))
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        default:
            printf("Not a valid number, try again");

            break;
        }
    }
    return 0;
}