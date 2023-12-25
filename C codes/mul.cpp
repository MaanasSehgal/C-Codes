#include <stdio.h>

int main()
{
    int m1, m2, n1, n2, m, n;

    printf("Enter m1 and n1: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter m2 and n2: ");
    scanf("%d %d", &m2, &n2);

    int first[m1][n1];
    int second[m2][n2];

    printf("Enter the elements of first matrix: ");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the elements of second matrix: ");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    if (n1 != m2)
    {
        printf("The two matrices can't be multiplied");
    }

    m = m1;
    n = n2;

    int ans[m][n];
    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += first[i][k] * second[k][j];
            }
            ans[i][j] = sum;
        }
    }

    printf("The new matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}