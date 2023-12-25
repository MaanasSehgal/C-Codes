// Write a C program to determine the largest and smallest element of a 2-D array. Use functions LARGEST and SMALLEST for the given purpose.
#include <stdio.h>

int findSmallest(int rows, int columns, int arr[100][100])
{
    int smallest = __INT_MAX__;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (smallest > arr[i][j])
            {
                smallest = arr[i][j];
            }
        }
    }
    return smallest;
}

int findLargest(int rows, int columns, int arr[100][100])
{
    int largest = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }
    return largest;
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

    int smallest = findSmallest(rows, columns, arr);
    int largest = findLargest(rows, columns, arr);

    printf("Smallest: %d, Largest: %d", smallest, largest);
    return 0;
}