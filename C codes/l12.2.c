// WAP to Print all unique elements of an array.

#include <stdio.h>

int main()
{
    int size, count = 0, duplicates = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], unique[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        duplicates = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicates = 1;
                break;
            }
        }

        if (!duplicates)
        {
            unique[count] = arr[i];
            count++;
        }
    }

    printf("The array with duplicate values removed is: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", unique[i]);
    }

    return 0;
}
