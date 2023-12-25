// Given an array arr[] of non-negative integers and an integer sum, find a
//  subarray that adds to a given sum.
#include <stdio.h>
int main()
{
    int size, sum, sumOfElements = 0, start = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum: ");
    scanf("%d", &sum);

    for (int end = 0; end < size; end++)
    {
        sumOfElements += arr[end];

        while (sumOfElements > sum)
        {
            sumOfElements -= arr[start];
            start++;
        }

        if (sumOfElements == sum)
        {
            printf("The range of index is: %d - %d", start, end);
            return 0;
        }
    }

    printf("No subarray found with the given sum.");
    return 0;
}
