// Write a C program to sort the elements of a values in a 2-D array using a function SORTELE.

#include <stdio.h>

void sort(int rows, int columns, int arr[100][100])
{
    int size = rows * columns, count = 0, sortArr[size];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sortArr[count] = arr[i][j];
            count++;
        }
    }

    count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (sortArr[j] > sortArr[j + 1])
            {
                sortArr[j] = sortArr[j] + sortArr[j + 1] - (sortArr[j + 1] = sortArr[j]);
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = sortArr[count];
            count++;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, columns;

    printf("Enter the rows and columns of the array: ");
    scanf("%d %d", &rows, &columns);

    int arr[100][100];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    sort(rows, columns, arr);
    return 0;
}