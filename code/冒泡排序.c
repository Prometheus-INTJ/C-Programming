#include <stdio.h>
#define last_index (sizeof(a) / sizeof(a[0]) - 1)

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a[]={38,49,76,76,13,27,30};
    for(int i = 0; i < last_index; i++)
    {
        for(int j = 0; j < last_index-i; j++)
            if (a[j] > a[j+1])
                swap(&a[j],&a[j+1]);
    }
    for(int i = 0; i <= last_index; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
