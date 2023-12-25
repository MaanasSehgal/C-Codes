// Write a C program to find the sum of only PRIME values in a 2-D array using a function PRIMESUM.
#include <stdio.h>
#include <math.h>

int checkPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int k = 2; k <= sqrt(num); k++)
    {
        if (num % k == 0)
        {
            return 0;
        }
    }
    return 1;
}

int findSum(int rows, int columns, int arr[100][100])
{
    int sum = 0, check = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            check = checkPrime(arr[i][j]);
            if (check == 1)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int rows, columns;

    printf("Enter the rows and columns of the array: ");
    scanf("%d %d", &rows, &columns);

    int arr[100][100];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = findSum(rows, columns, arr);
    printf("The sum is: %d", sum);
    return 0;
}