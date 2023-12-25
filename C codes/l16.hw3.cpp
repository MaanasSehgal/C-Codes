// Write a C program to find the sum of only PRIME values in a 1-D array using a function PRIMESUM.
#include <stdio.h>
#include <math.h>

bool checkPrime(int num);
int primeSum(int arr[], int size);

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The sum of prime terms of the array is: %d", primeSum(arr, size));

    return 0;
}

bool checkPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int primeSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (checkPrime(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}