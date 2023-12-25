#include <stdio.h>

void printBoard(char board[]);

int main()
{
}

void printBoard(char board[])
{
    printf("        |        |        \n");
    printf("   %c    |   %c    |   %c    \n", board[0], board[1], board[2]);
    printf("________|________|________\n");
    printf("        |        |        \n");
    printf("   %c    |   %c    |   %c    \n", board[3], board[4], board[5]);
    printf("________|________|________\n");
    printf("        |        |        \n");
    printf("   %c    |   %c    |   %c    \n", board[6], board[7], board[8]);
    printf("        |        |        \n");
}