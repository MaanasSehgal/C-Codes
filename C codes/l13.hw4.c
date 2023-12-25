// WAP to find the Trace(sum of the diagonal elements) of a given mxn matrix

#include <stdio.h>

int main()
{
    int size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }

    printf("The Trace of the matrix is: %d", sum);
    return 0;
}