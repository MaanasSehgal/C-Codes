// Write a C program to determine the second largest element of a 1-D array of using a function SECLARGEST.

#include <stdio.h>

int secLargest(int arr[], int size)
{
    int largest = arr[0], secLargest = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secLargest)
        {
            secLargest = arr[i];
        }
    }
    return secLargest;
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

    printf("The second largest element is: %d", secLargest(arr, size));
    return 0;
}