// positive and negative in array using pointer
#include <stdio.h>

void solve(int *ptr, int n)
{
    int positive = 0, negative = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) >= 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    printf("Positive: %d and Negative: %d", positive, negative);
    return;
}

int main()
{
    int n;

    printf("Enter the size of n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr;
    ptr = arr;

    solve(ptr, n);
    return 0;
}