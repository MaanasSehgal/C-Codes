// WAP to delete an element at desired position from an array.
#include <stdio.h>

int main()
{
    int index, size, value;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to delete: ");
    scanf("%d", &value);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }

    // Print the updated array:
    printf("The updated array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
