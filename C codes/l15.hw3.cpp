// WAP to print all prime numbers between 1 to 100 using function.

#include <stdio.h>

int isPrime(int num);

int main() {
    int num;

    printf("2 ");
    for (num = 3; num <= 100; num += 2) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }

    return 0;
}

int isPrime(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; 
}
