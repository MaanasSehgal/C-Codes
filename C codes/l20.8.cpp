// WAP to find the largest element stored in an array of n elements by using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (float *)calloc(n, sizeof(float));

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &ptr[i]);
    }

    float max = ptr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < ptr[i])
        {
            max = ptr[i];
        }
    }

    printf("Max value is: %f", max);

    free(ptr);
    return 0;
}