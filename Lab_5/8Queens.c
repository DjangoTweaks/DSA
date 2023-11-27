#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define N 8 // Define the board size as 8x8

void printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
   printf("\n");
}

bool isSafe(int board[N][N], int row, int col)
{
    int i, j;

    // Check this row on the left side
    for (i = 0; i < col; i++)
    {
        if (board[row][i])
        {
            return false;
        }
    }

    // Check upper diagonal on the left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
        {
            return false;
        }
    }

    // Check lower diagonal on the left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
    {
        if (board[i][j])
        {
            return false;
        }
    }

    return true;
}

bool solveNQueens(int board[N][N], int col)
{
    if (col >= N)
    {
        printSolution(board);
        return true;
    }

    bool res = false;
    for (int i = 0; i < N; i++)
    {
        if (isSafe(board, i, col))
        {
            board[i][col] = 1;

            res = solveNQueens(board, col + 1) || res;

            board[i][col] = 0; // Backtrack if the placement doesn't lead to a solution
        }
    }

    return res;
}

void solve8Queens()
{
    int board[N][N] = {0};

    if (!solveNQueens(board, 0))
    {
        printf("Solution does not exist\n");
    }
}

int main()
{
    solve8Queens();
    return 0;
}
