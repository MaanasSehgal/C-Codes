// Write a C program to determine the sum of elements of a 2-D array using a function ELESUM.
#include <stdio.h>

int findSum(int rows, int columns, int arr[100][100]) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int rows, columns;

    printf("Enter the rows and columns of the array: ");
    scanf("%d %d", &rows, &columns);

    int arr[100][100];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = findSum(rows, columns, arr);
    printf("The sum is: %d", sum);
    return 0;
}
