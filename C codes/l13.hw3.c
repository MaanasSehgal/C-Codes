// WAP to find the transpose of a matrix.

#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size][size], transpose[size][size];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
            transpose[j][i] = arr[i][j];
        }
    }

    printf("The transpose of the above matrix is: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}