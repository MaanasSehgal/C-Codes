// WAP to find largest element stored in an array.

#include <stdio.h>

int main()
{
    int size, max = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Largest number is %d", max);
    return 0;
}