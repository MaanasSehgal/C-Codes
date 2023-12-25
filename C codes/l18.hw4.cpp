// Write a recursive function to copy one array to another.
#include <stdio.h>

void copyArray(int arr[], int newArr[], int size, int i)
{
    if (i == size)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d ", newArr[i]);
        }
        return;
    }
    newArr[i] = arr[i];
    copyArray(arr, newArr, size, i + 1);
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

    int newArr[size];

    copyArray(arr, newArr, size, 0);
    return 0;
}