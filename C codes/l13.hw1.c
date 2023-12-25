// WAP to check whether a matrix is identity matrix or not.

#include <stdio.h>
int main()
{
    int size, count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter the elements of the array: \n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j && i == 1)
            {
                count++;
            }
            else if (i != j)
            {
                if (arr[i][j] != 0)
                {
                    printf("The matrix is not an identity matrix");
                    return 0;
                }
            }
        }
    }

    if (count = size)
    {
        printf("The matrix is an identity matrix");
    }
    else
    {
        printf("The matrix is not an identity matrix");
    }

    return 0;
}
