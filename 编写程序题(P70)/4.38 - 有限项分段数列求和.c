#include <stdio.h>

int main(void)
{
    int sum1 = 0;
    int sum2 = 0;
    double sum3 = 0;
    for(int k = 1; k <= 100; k++)
        sum1 = sum1 + k;
    for(int k = 1; k <= 50; k++)
        sum2 = sum2 + k*k;
    for(int k = 1; k <= 10; k++)
        sum3 = sum3 + (double)1/k;
    double sum = sum1 + sum2 + sum3;
    printf("%.2f\n", sum);
    return 0;
}
