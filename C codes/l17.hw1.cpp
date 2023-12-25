// Write a C program to determine the sum of largest and smallest element of a 2-D array.
#include <stdio.h>

int findSum(int rows, int columns, int arr[100][100])
{
    int smallest = __INT_MAX__, largest = arr[0][0];
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
    return smallest + largest;
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

    int sum = findSum(rows, columns, arr);
    printf("The sum is: %d", sum);
    return 0;
}