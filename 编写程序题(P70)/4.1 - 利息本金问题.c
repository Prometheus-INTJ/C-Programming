#include <stdio.h>

// 不要()留空，写成(void)更专业
int main(void)
{
    // 必须是double不能是int
    double amount = 0; // 本金
    double rate = 0;   // 月利息率
    int period = 0; // 存入期限
    double sum = 0;    // 到期后的利息本金合计

    // 在scanf中double对应%lf不是%f
    scanf("%lf%d", &amount, &period);
    switch (period)
    {
        case(1): rate = 0.00315; break;
        case(2): rate = 0.00330; break;
        case(3): rate = 0.00345; break;
        case(5): rate = 0.00375; break;
        case(8): rate = 0.00420; break;
        default: printf("invaild input\n"); return 0;
    }
    sum = amount + amount * rate;

    // 银行最多小数点两位数，记得输出用 %.2f
    printf("到期后的利息本金合计%.2f\n", sum);
}
