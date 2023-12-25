#include <stdio.h>

#include <math.h>
#include <string.h>
#include <stdbool.h>

void multiplyMatrices(int arr1[100][100], int arr2[100][100], int m, int n)
{
    int sum = 0;
    int arr3[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }

    printf("The new matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m1, n1, m2, n2, m, n;

    printf("Enter the size of 1st array: ");
    scanf("%d %d", &m1, &n1);

    int arr1[100][100];

    printf("Enter the elements of the array: \n");

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the size of 2nd array: ");
    scanf("%d %d", &m2, &n2);

    int arr2[100][100];

    printf("Enter the elements of the array: \n");

    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    if (n1 != m2)
    {
        printf("Can't be multiplied");
        return 0;
    }
    else
    {
        m = m1;
        n = n2;
        multiplyMatrices(arr1, arr2, m, n);
    }
    return 0;
}