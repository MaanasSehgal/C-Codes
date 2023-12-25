//WAP to find the average of N numbers using arrays.

#include <stdio.h>

int main()
{
    int size;
    float avg = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        avg += arr[i];
    }
    avg /= size;
    printf("Average of elements is %f", avg);
    return 0;
}