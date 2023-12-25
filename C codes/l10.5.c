// WAP to insert an element in an 1-D array.
#include <stdio.h>

int main()
{
    int num, pos, size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size + 1];

    printf("Enter the %d elements of array: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position you want to insert the number: ");
    scanf("%d", &pos);

    if (pos >= 0 && pos < size)
    {
        for (int i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
    }
    else
    {
        printf("The position is invalid");
    }

    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

    arr[pos] = num;

    printf("The updated array is: ");
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}