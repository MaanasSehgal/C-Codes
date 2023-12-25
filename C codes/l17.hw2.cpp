// Write a C program to swap the largest and smallest element of a 2-D array of using a function SWAP.

#include <stdio.h>

void swap(int rows, int columns, int arr[100][100])
{
    int smallest = __INT_MAX__, largest = arr[0][0], smallestI, smallestJ;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
            else if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == smallest)
            {
                smallestI = i;
                smallestJ = j;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == largest)
            {
                arr[i][j] = arr[i][j] + arr[smallestI][smallestJ] - (arr[smallestI][smallestJ] = arr[i][j]);
            }
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

    swap(rows, columns, arr);
}