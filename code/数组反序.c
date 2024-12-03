#include <stdio.h>

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main(void)
{
    int a[] = {1,6,9,12,61,12,21};
    int lenth = sizeof(a) / sizeof(int);
    int max_index = lenth - 1;
    for(int i = 0, j = max_index; i < j; ++i, --j)
        swap(&a[i], &a[j]);
    for(int i = 0; i <= max_index; ++i)
        printf("%d\t", a[i]);
    /**
    for(int *p = a; p <= a + lenth; ++p)
        printf("%d\t", *p);
    **/
    puts("");
    return 0 ;
}
