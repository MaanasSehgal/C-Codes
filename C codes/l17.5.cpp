// Write a C program to perform addition of two matrices and display the result using 3rd matrix. Use a function ADDMATRIX

#include <stdio.h>

void findSum(int rows, int columns, int arr1[100][100], int arr2[100][100])
{
    int sumArr[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sumArr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", sumArr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, columns;

    printf("Enter the rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns);

    int arr1[100][100];
    int arr2[100][100];

    printf("Enter the elements of the array 1: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of the array 2: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    findSum(rows, columns, arr1, arr2);
    return 0;
}
