#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
char checkState(char board[], int boardSize);
void printBoard(char board[]);

int main()
{
    int num;
    int boardSize = 3;
    char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char currentPlayer = 'X';
    char winner = '0';
    int turns = 0;

    while (true)
    {
        printBoard(board);

        printf("Enter %c's move (1-9): ", currentPlayer);
        if (scanf("%d", &num) != 1 || num < 1 || num > 9)
        {
            sleep(1);
            printf("Invalid input. Please enter a number between 1 and 9.\n");
            continue;
        }

        turns++; // to check for draw conditions
        if (board[num - 1] == '1' + num - 1)
        {
            board[num - 1] = currentPlayer;
        }
        else
        {
            printf("Invalid move. Try again.\n");
            continue;
        }

        winner = checkState(board, boardSize);
        if (winner != '0')
        {
            printBoard(board);
            printf("%c wins this game!\n", winner);
            break;
        }
        else if (turns == 9)
        {
            printf("The game is a draw. Well Played!\n");
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    sleep(2);
    return 0;
}

char checkState(char board[], int boardSize)
{
    // checking loop for equal in row
    for (int i = 0; i < boardSize * boardSize; i += boardSize)
    {
        if (board[i] == board[i + 1] && board[i] == board[i + 2])
        {
            printf("equal row triggered");
            return board[i];
        }
    }
    // checking loop for equal in columns
    for (int i = 0; i < boardSize; i++)
    {
        if (board[i] == board[i + boardSize] && board[i] == board[i + 2 * (boardSize)])
        {
            printf("equal col triggered");
            return board[i];
        }
    }
    // check left to right diagonal
    if (board[0] == board[1 + boardSize] && board[0] == board[2 * (boardSize + 1)])
    {
        printf("equal l to r diagonal triggered");
        return board[0];
    }
    // check right to left diagonal
    if (board[2] == board[1 + boardSize] && board[2] == board[2 * (boardSize - 1)])
    {
        printf("equal r to l diagonal triggered");

        return board[2];
    }

    // if all the above conditions are false, the game is still on so return '0' for winner
    return '0';
}

void printBoard(char board[])
{
    // system("cls");
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