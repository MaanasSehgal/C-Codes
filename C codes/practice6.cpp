#include <stdio.h>

int main()
{
    int num, rows, columns, rowCount, colCount1, colCount2;

    printf("Enter a number: ");
    scanf("%d", &num);

    rows = num + 1;
    columns = (num * 2) - 1;

    rowCount = 1;
    colCount1 = 0;
    colCount2 = columns + 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rowCount && (j == colCount1 || j == colCount2))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        rowCount++;
        colCount1++;
        colCount2--;
    }
    return 0;
}