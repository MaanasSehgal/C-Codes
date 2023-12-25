// WAP to compute the sum of all elements in an array using pointer.
#include <stdio.h>

int findSum(int size, int *ptr)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(ptr + i);
    }
    return sum;
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");

    int *ptr;
    ptr = arr;

    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }

    int sum = findSum(size, ptr);

    printf("The sum is: %d", sum);
    return 0;
}