#include <stdio.h>

int factorial (int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int main(void)
{
    for (int number = 100; number <= 999; number++)
    {
        int hundreds = number / 100;
        int tens = (number / 10) % 10;
        int ones = number % 10;
        if (number == factorial(hundreds) + factorial(tens) + factorial(ones))
            printf("%d\n", number);
    }
    return 0;
}
