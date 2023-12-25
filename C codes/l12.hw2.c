// Given an array A of N elements. Find the majority element in the array. A majorityelement in an array A of size N is an element that appears more than N/2 times inthe array.
#include <stdio.h>

int main()
{
    int arr[] = {3, 65, 2, 2, 3, 1, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]), count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        
        if (count > size / 2)
        {
            printf("%d is a majority number\n", arr[i]);
        }
        count = 0;
    }
}