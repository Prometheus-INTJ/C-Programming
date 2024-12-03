#include <stdio.h>

int main(void)
{
    double data1 = 0;
    double data2 = 0;
    double result = 0;
    char op = '\0';
    scanf("%lf %c %lf", &data1, &op, &data2);
    switch (op)
    {
        case '+': result = data1 + data2; break;
        case '-': result = data1 - data2; break;
        case '*': result = data1 * data2; break;
        case '/':
            if (data2 != 0)
            {
                // 写成这样没必要，既然已经是double那就不用强制类型转换
                // result = (double)data1 / (double)data2; break;
                result = data1 / data2;
                break;
            }
            else
            {
                printf("invalid input\n");
                return 0;
            }
        default: printf("invalid input\n"); return 0;
    }
    printf("%lf %c %lf = %.15f\n", data1 , op, data2 , result);
    return 0;
}
