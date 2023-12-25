#include <stdio.h>

int main()
{
    int n, count = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    int rows = (n % 5 == 0) ? (n / 5) : (n / 5 + 1);
    int arr[rows][5];

    for (int i = 0; i < rows; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            for (int j = 4; j >= 0; j--)
            {
                count > n ? arr[i][j] = 0 : arr[i][j] = count;
                count++;
            }
        }
        else
        {
            for (int j = 0; j < 5; j++)
            {
                count > n ? arr[i][j] = 0 : arr[i][j] = count;
                count++;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}