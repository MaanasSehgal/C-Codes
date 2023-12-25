// WAP to find the sum of elements of a matrix in its upper triangle.

// WAP to multiply two matrices and display it.

#include <stdio.h>

int main()
{
    int size, sum = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter the elements of array: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i < j) {
                sum += arr[i][j];
            }
        }
    }

    printf("The sum of upper triangular matrix is: %d", sum);
    return 0;
}