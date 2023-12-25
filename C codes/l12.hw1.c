// Given an integer array, find the peak element in it. A peak element is an element that is greater than its neighbours. There might be multiple peak elements in an array, and the solution should report any peak element.

#include <stdio.h>

int main()
{
    int size = 8;
    int arr[] = {1, 6, 3, 3, 5, 1, 2, 7};
    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            printf("%d is a peak element\n", arr[i]);
            i++;
        }
    }
    return 0;
}