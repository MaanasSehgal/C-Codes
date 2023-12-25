// WAP to search an element in an 1-D array.

#include <stdio.h>

int main()
{
    int num;
    int arr[6] = {3, 6, 1, 69, 4, 7};

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == num)
        {
            printf("%d is at %d position", num, i);
        }
    }
    return 0;
}