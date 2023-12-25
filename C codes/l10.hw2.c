// WAP to Count the total number of duplicate elements in an array.
#include <stdio.h>

int main()
{
    int arr[10] = {1, 56, 2, 3, 1, 7, 2, 1, 2, 8};
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        int duplicates = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicates = 1;
                break;
            }
        }

        if (!duplicates)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (arr[i] == arr[j])
                {
                    duplicates = 1;
                    count++;
                    break;
                }
            }
        }
    }

    printf("The number of repeated numbers are %d", count);
    return 0;
}