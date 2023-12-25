// WAP to sort the elements of an 1-D array in ascending order by using a suitable user defined function for sort operation.

#include <stdio.h>

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1] - (arr[j + 1] = arr[j]);
            }
        }
    }
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

    sortArray(arr, size);
    return 0;
}