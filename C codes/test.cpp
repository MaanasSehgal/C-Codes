#include <stdio.h>

void convert(int num, int arr[], int count)
{
    if (num == 0)
    {
        for (int i = count - 1; i >= 0; i--)
        {
            printf("%d", arr[i]);
        }
        return;
    }
    arr[count] = num % 2;
    convert(num / 2, arr, count + 1);
}

int main()
{
    int num;

    printf("Enter the number to convert to binary: ");
    scanf("%d", &num);

    int arr[32];
    convert(num, arr, 0);

    return 0;
}