// WAP to print all the even and odd numbers in an 1-D array.

#include <stdio.h>

int main()
{
    int size, evenCount = 0, oddCount = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size], even[size], odd[size];

    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Checking for odd and even
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("The odd numbers of the array are: ");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }

    printf("\n");

    printf("The even numbers of the array are: ");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", even[i]);
    }
    return 0;
}