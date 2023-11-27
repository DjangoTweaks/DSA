#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define N 8 // Define the size of the board as 8x8

// Function to print the solution (the positions of queens on the board)
void printSolution(int board[N][N]) {
    // Loop through the 2D array and print each element
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to check if placing a queen in board[row][column] is safe
bool isSafe(int board[N][N], int row, int column) {
    int i, j;

    // 
    
    for (i = 0; i < column; i++) {
        if (board[row][i]) {
            return false; // If there is a queen in the same row to the left, it's unsafe
        }
    }

    // Check upper diagonal on the left side
    for (i = row, j = column; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false; // If there is a queen in the upper left diagonal, it's unsafe
        }
    }

    // Check lower diagonal on the left side
    for (i = row, j = column; j >= 0 && i < N; i++, j--) {
        if (board[i][j]) {
            return false; // If there is a queen in the lower left diagonal, it's unsafe
        }
    }

    return true; // If no conflicts found, it's safe to place a queen
}

// Function to solve the N-Queens problem using backtracking
bool solveNQueens(int board[N][N], int col) {
    if (col >= N) {
        printSolution(board); // If all queens are placed successfully, print the solution
        return true;
    }

    bool res = false;
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1; // Place the queen in this cell
            res = solveNQueens(board, col + 1) || res; // Recur to place rest of the queens
            board[i][col] = 0; // If placing queen doesn't lead to a solution, backtrack
        }
    }

    return res; // Return false if queen cannot be placed in any row of this column
}

// Function to solve the 8-Queens problem
void solve8Queens() {
    int board[N][N] = {0}; // Initialize the board with zeros

    // If solveNQueens isn't able to find a solution, print that the solution does not exist
    if (!solveNQueens(board, 0)) {
        printf("Solution does not exist\n");
    }
}

// Main function
int main() {
    solve8Queens(); // Solve the 8-Queens problem
    return 0;
}
