// WAP to find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[10] = {1, 6, 2, 7, 3, 2, 34, 11, 8, 9};
    int largest = arr[0]; 
    int secondLargest = arr[1]; 

    for (int i = 2; i < 10; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("Largest is %d and second Largest is %d", largest, secondLargest);
    return 0;
}
