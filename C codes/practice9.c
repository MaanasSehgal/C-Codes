#include <stdio.h>

int main()
{
    int size, tempRow, tempCol;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    tempRow = 0, tempCol = size - 1;

    int arr[size][size];
    printf("Enter the elements of the array: \n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix with diagonals is: \n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i == tempRow && j == tempCol))
            {
                printf("%d ", arr[i][j]);
                tempCol--;
                tempRow++;
            }
            else if (i == j)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}