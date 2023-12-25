#include <stdio.h>

int main()
{
    int m1, m2, n1, n2, m, n, sum = 0;

    printf("Enter the size of first matrix: ");
    scanf("%d %d", &m1, &n1);

    int first[m1][n1];

    printf("Enter the elements of the matrix: \n");

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the size of second matrix: ");
    scanf("%d %d", &m2, &n2);

    int second[m2][n2];

    printf("Enter the elements of the matrix: \n");

    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    if (n1 != m2)
    {
        printf("The provided matrices can't be multiplied");
        return 0;
    }

    int arr[m1][n2];

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            sum = 0;

            for (int k = 0; k < m1; k++)
            {
                sum += first[i][k] * second[k][j];
            }
            arr[i][j] = sum;
        }
    }
    printf("The final matrix is: \n");

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
