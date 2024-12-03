#include <stdio.h>
#define N 55555

int main(void)
{
    int find_number = 100;
    for(int i = 2; i < N - 1; i++)
        if (N % i == 0 && i <= 999)
            find_number = i;
    printf("%d\n", find_number);
    return 0;
}
