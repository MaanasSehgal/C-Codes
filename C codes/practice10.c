#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int arr1[size][size];

    printf("Enter the elements of Array: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }

    int mulArr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            mulArr[i][j] = 0;
            for (int k = 0; k < size; k++)
            {
                mulArr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // check for identity
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j && i == 1)
            {
            }
            else if (i != j)
            {
                if (mulArr[i][j] != 0)
                {
                    printf("The matrix is not orthogonal matrix");
                    return 0;
                }
            }
        }
    }
    printf("The matrix is an orthogonal matrix");
    return 0;
}