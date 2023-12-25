// WAP to compute the sum of all elements in an array using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < size; i++)
    {
        sum += *(ptr + i);
    }

    printf("The sum is: %d", sum);
    return 0;
}