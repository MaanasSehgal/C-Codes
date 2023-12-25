// WAP to reverse a three-digit number. Number must be a user
#include <stdio.h>
int main()
{
    int num, pos1, pos2, pos3, finalNum;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    // 123
    pos1 = num / 100;
    pos2 = ((num % 100) - ((num % 100) % 10)) / 10;
    pos3 = (num % 100) % 10;

    finalNum = pos3 * 100 + pos2 * 10 + pos1;
    printf("The reversed number is %d", finalNum);
    return 0;
}

// newNum = 0;
// while(num != 0) {
// temp = num % 10;
// newNum = newNum * 10 + temp;
// num /= 10;
// }