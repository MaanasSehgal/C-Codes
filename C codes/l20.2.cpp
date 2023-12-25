// WAP to swap two numbers using call by reference.

#include <stdio.h>
//* => value at address m
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    swap(&m, &n);

    printf("m: %d and n: %d", m, n);
    return 0;
}