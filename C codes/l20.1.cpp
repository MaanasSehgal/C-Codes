// WAP to multiply two numbers using pointers.

#include <stdio.h>

int multiply(int *m, int *n)
{
    int c = *m * *n;
    return c;
}

int main()
{
    int a, b;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    int ans = multiply(&a, &b);
    printf("%d", ans);
}