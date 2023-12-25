//Dynamically allocate the size of an array using calloc, insert elements into the array, then print the elements. Change the size of the array, get the new elements and print the array. Finally free the memory.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n1, n2;

    printf("Enter the size of the array: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    printf("Enter numbers(%d): ", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The elements are : \n");
    for (int i = 0; i < n1; i++)
    {
        printf("%d\n", ptr[i]);
    }

    printf("Enter the size of the new array: ");
    scanf("%d", &n2);

    realloc(ptr, n2 * sizeof(int));

    printf("Enter numbers: ");
    for (int i = n1; i < n2; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        printf("number %d is %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}