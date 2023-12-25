// Write a C program to swap the first and last element of a 1-D array of using a function SWAP.
#include <stdio.h>

void swapNum(int arr[], int size)
{
    arr[0] = arr[0] + arr[size - 1] - (arr[size - 1] = arr[0]);

    printf("After the swap of first and the last element, the new array is: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    swapNum(arr, size);
    return 0;
}