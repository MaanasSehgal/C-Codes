//WAP to find out the multiplication of the numbers stored in an array of integers.

#include <stdio.h>

int main() {
    int mul = 1;
    int arr[5] = {4, 5, 6, 7, 2};

    for(int i = 0; i < 5; i++) {
        mul *= arr[i];
    }
    printf("The multiplication of all numbers of the array is: %d", mul);
}