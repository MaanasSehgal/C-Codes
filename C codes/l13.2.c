// WAP to find the sum of two matrices of order 2x2 using multidimensional arrays.

#include <stdio.h>

int main()
{
    int rows = 2, columns = 2, arr1[rows][columns], arr2[rows][columns], sum[rows][columns];

    printf("Enter the elements of Array 1: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of Array 2: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The sum of both the arrays is: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
