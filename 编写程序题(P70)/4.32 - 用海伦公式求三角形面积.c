#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 0;
    double b = 0;
    double c = 0;
    printf("依次输入三角形的三条边长，中间用空格隔开：");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        double p = (a + b + c) / 2;
        double tri_area = sqrt(p * (p-a) * (p-b) * (p-c));
        printf("三角形的面积 = %.2f", tri_area);
        
    }
    else
        printf("invaild input\n");
    return 0;
}
