#include <stdio.h>
#include <string.h>

void swap(char *x,char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    char str[1000];
    scanf("%s",str);
    size_t lenth = strlen(str);
    for(size_t i = 0, j = lenth - 1; i < j; i++, j--)
        swap(&str[i],&str[j]);
    printf("%s\n", str);
    return 0;
}
