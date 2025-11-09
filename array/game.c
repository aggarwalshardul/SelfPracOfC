#include <stdio.h>

char board[3][3];  // 3x3 Tic Tac Toe board

void initBoard() {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard() {
    printf("\n");
    for(int i=0; i<3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if(i < 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

int checkWin() {
    // Check rows
    for(int i=0; i<3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
    }
    // Check columns
    for(int i=0; i<3; i++) {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    }
    // Check diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1;

    return 0;
}

int isFull() {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

int main() {
    int row, col, player = 1;
    char mark;
    initBoard();

    while(1) {
        displayBoard();
        mark = (player == 1) ? 'X' : 'O';
        printf("Player %d (%c), enter row and column (0-2): ", player, mark);
        scanf("%d %d", &row, &col);

        if(row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[row][col] = mark;

        if(checkWin()) {
            displayBoard();
            printf(" Player %d wins!\n", player);
            break;
        }

        if(isFull()) {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }

        player = (player == 1) ? 2 : 1;
    }

    return 0;
}
int term();
