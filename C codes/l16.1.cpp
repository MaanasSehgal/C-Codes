// WAP to design a user defined function to calculate the sum of the elements of an integer 1-D array.
#include <stdio.h>

int returnSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
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

    printf("The sum of the elements of array is: %d", returnSum(arr, size));
    return 0;
}
