#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", arr[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    printf("The matrix is not an identity matrix");
                    return 0;
                }
            }
            else if (arr[i][j] != 0)
            {
                printf("The matrix is not an identitiy matrix");
                return 0;
            }
        }
    }
    printf("The matrix is an identity matrix");
    return 0;
}