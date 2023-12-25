// SWAP USING POINTER
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main()
{
    int a, b;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("a: %d and b: %d", a, b);
    return 0;
}