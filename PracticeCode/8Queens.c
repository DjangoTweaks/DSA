#include <stdio.h>
#define N 8

void printSolution(int board[10][10])
{
    for(int i=0; i < N; i++)
    {
        for(int j=0; j < N; j++)
        {
            printf("%d", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


bool isSafe();
bool NQueens();
void EightQueens();





int main()
{
    /* code */
    return 0;
}
