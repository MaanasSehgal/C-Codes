// WAP to swap three numbers in cyclic order using Call by Reference. In other words, WAP that takes three variables (a, b, c) as separate parameters and rotates the values stored so that value a goes to b, b to c and c to a.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    printf("Enter 3 variables: a, b, c: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ptr[i]);
    }

    int temp = 0;
    // 1 2 3
    // 3 1 2
    temp = ptr[2];
    ptr[2] = ptr[1];
    ptr[1] = ptr[0];
    ptr[0] = temp;

    printf("Updated values => a: %d\nb: %d\nc: %d", ptr[0], ptr[1], ptr[2]);

    free(ptr);
    
    return 0;
}