// Write a C program to determine the largest and smallest element of a 1-D array. Use functions LARGEST and SMALLEST for the given purpose.
#include <stdio.h>

void determineElements(int arr[], int size)
{
    int smallest = arr[0], largest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        else if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("The smallest number is %d and the largest number is %d", smallest, largest);
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

    determineElements(arr, size);

    return 0;
}