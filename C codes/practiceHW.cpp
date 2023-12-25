#include <stdio.h>

int main()
{
    int num, size, index, temp;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    size++;

    int arr[size];

    // 1 2 3 4 5
    // 1 1 2 3 4 5

    printf("Enter the index: ");
    scanf("%d", &index);

    printf("Enter the number to add at that index: ");
    scanf("%d", &num);

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = num;

    printf("The new array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}