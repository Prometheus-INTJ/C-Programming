#include <stdio.h>
#define N 10

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int combination(int n, int k)
{
    if (n >= k)
        return factorial(n) / (factorial(k)*factorial(n-k));
    else
        return -1;
}

int main(void)
{
    int matrix[N][N] = {0};
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            matrix[i][j] = combination(i,j);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
    return 0;
}
