// WAP to find out the sum of the N numbers stored in an array of integers.

#include <stdio.h>

int main()
{
    int size, sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of elements is %d", sum);
    return 0;
}