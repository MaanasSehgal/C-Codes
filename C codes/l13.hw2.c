// WAP to find out frequency of odd and even numbers in a matrix
#include <stdio.h>

int main()
{
    int evenCount = 0, oddCount = 0, rows, columns;

    printf("Enter the rows and columns of the array: ");
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }
    }
    printf("Odd count is %d and even count is %d", oddCount, evenCount);
    return 0;
}