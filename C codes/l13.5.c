// WAP to check whether two matrices are equal or not.

#include <stdio.h>

int main()
{
    int rows, columns, count = 0;

    printf("Enter the rows and columns of the array: ");
    scanf("%d %d", &rows, &columns);

    int arr1[rows][columns], arr2[rows][columns];

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

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                count++;
            }
            else
            {
                printf("The two matrix are not equal");
                return 0;
            }
        }
    }

    printf("The two martix are equal");
    return 0;
}