#include <stdio.h>

int main(void)
{
    _Bool is_leap = 0;
    int year = 0, month = 0, days = 0;
    scanf("%d %d", &year, &month);
    if(((year % 4 == 0) && (year % 100 != 0))||(year % 400 == 0))
        is_leap = 1;
    switch (month)
    {
        case(1): days = 31; break;
        case(2):
            if (is_leap == 1)
                days = 29;
            else
                days = 28;
            break;
        case(3): days = 31; break;
        case(4): days = 30; break;
        case(5): days = 31; break;
        case(6): days = 30; break;
        case(7): days = 31; break;
        case(8): days = 31; break;
        case(9): days = 30; break;
        case(10): days = 31; break;
        case(11): days = 30; break;
        case(12): days = 31; break;
        default: printf("unvaild input\n"); return 0;
    }
    if (is_leap == 1)
        printf("本月有%d天，今年是闰年\n", days);
    else
        printf("本月有%d天，今年不是闰年\n", days);
    return 0;
}
