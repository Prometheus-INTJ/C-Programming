#include <stdio.h>

double yield(double x)
{
    if (x >= 0 && x < 2)
        return - x + 2.5;
    else if (x >= 2 && x < 4)
        return 2 - 1.5 * (x - 3) * (x - 3);
    else if (x >= 4 && x < 6)
        return x/2 - 1.5;
    else
        return -1;
}

int main(void)
{
    double x = 0;
    scanf("%lf", &x);
    if (x >= 0 && x < 6)
        printf("y = %.2f\n", yield(x));
    else
        printf("undefined\n");
    return 0;
}
