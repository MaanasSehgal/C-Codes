// WAP to find out the maximum element of an integer array by using recursion.

#include <stdio.h>

int findMax(int arr[], int size, int max, int i)
{
    if (i >= size)
        return max;

    if (arr[i] > max)
        max = arr[i];

    findMax(arr, size, max, i + 1);
}

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

    int max = findMax(arr, size, arr[0], 0);

    printf("The maximum value in the array is: %d", max);
    return 0;
}