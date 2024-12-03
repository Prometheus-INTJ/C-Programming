/* 这道题（求和）有误差限制 */

/* 不要用 for 循环 */
/* 用 while 简单 */

#include <stdio.h>
#include <math.h>
#define N 55555

int main(void)
{
    int x = 0;
    int n = 0;
    double C = 0;
    printf("input value of x: ");
    scanf("%d", &x);
    if(x > 1)
    {
        double A = 1.0 / pow(x,n);
        while (A > 0.000001)
        {
            C += A;
            n++;
            A = 1.0 / pow(x,n);
        }
        printf("calculation result = %.2f\n", C);
        return 0;
    }
    else
    {
        printf("invaild input\n");
        return -1;
    }
}
