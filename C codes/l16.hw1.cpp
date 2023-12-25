// Write a C program to swap the largest and smallest element of a 1-D array of using a function SWAP.
#include <stdio.h>

void swapArrNums(int arr[], int size);

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

    swapArrNums(arr, size);
    return 0;
}

void swapArrNums(int arr[], int size)
{
    int largest = arr[0], smallest = arr[0], largestIdx, smallestIdx;

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
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == largest)
        {
            largestIdx = i;
        }
        else if (arr[i] == smallest)
        {
            smallestIdx = i;
        }
    }
    arr[largestIdx] = arr[largestIdx] + arr[smallestIdx] - (arr[smallestIdx] = arr[largestIdx]);

    printf("After the swap of largest and smallest number, the new array is: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}