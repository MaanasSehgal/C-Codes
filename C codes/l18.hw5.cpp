// Write a recursive function to convert a decimal number to binary
#include <stdio.h>

void convertToBinary(int num, int arr[], int count)
{
    if (num == 0)
    {
        for (int i = count - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
        return;
    }
    // num % 2 store remainder in array count++ num / 2
    arr[count] = num % 2;
    convertToBinary(num / 2, arr, count + 1);
}

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int arr[32];

    convertToBinary(num, arr, 0);
    return 0;
}