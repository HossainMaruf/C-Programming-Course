#include <stdio.h>

char board[3][3];
char currentPlayer;

void initializeBoard() {
    char position = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = position++;
}

void printBoard()
{
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWinner()
{
    // Rows and columns
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }
    // Diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}

int isDraw()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
    return 1;
}

void switchPlayer()
{
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void makeMove()
{
    int choice;
    int row, col;
    while (1)
    {
        printf("Player %c, enter your move (1-9): ", currentPlayer);
        scanf("%d", &choice);

        if (choice < 1 || choice > 9)
        {
            printf("Invalid move. Try again.\n");
            continue;
        }

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            printf("Spot already taken. Try again.\n");
        }
        else
        {
            board[row][col] = currentPlayer;
            break;
        }
    }
}

void main()
{
    currentPlayer = 'X';
    initializeBoard();

    // while (1) {
    //     printBoard();
    //     makeMove();

    //     if (checkWinner()) {
    //         printBoard();
    //         printf("Player %c wins!\n", currentPlayer);
    //         break;
    //     } else if (isDraw()) {
    //         printBoard();
    //         printf("It's a draw!\n");
    //         break;
    //     }

    //     switchPlayer();
    // }
}
