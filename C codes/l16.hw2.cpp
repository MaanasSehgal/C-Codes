// Write a C program to find the sum of only odd values in a 1-D array using a function ODDSUM.
#include <stdio.h>

int oddSum(int arr[], int size);

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The sum of odd terms of the given array is: %d", oddSum(arr, size));
    return 0;
}

int oddSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 1)
        {
            sum += arr[i];
        }
    }
    return sum;
}