// WAP to sort an array using Pointer.

#include <stdio.h>

void sortArray(int size, int *ptr)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                *(ptr + j) = *(ptr + j) + *(ptr + j + 1) - (*(ptr + j + 1) = *(ptr + j));
            }
        }
    }

    printf("The new array is: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return;
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");

    int *ptr;
    ptr = arr;

    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }

    sortArray(size, ptr);
    return 0;
}