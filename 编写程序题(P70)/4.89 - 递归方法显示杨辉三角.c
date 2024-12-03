#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int combination(int n, int k)
{
    if (n == 0 || n == k)
        return 1;
    else
        return factorial(n)/(factorial(k)*factorial(n-k));
}

int main(void)
{
    int height = 0;
    printf("请输入你要打印杨辉三角的行数：");
    scanf("%d", &height);
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < i + 1; j++)      // 这里的判断条件注意不是 j < i
                                            // 假设在第二行，会显示两列数字
                                            // 分别是 j = 0 和 j = 1 的情况
        {
            printf("%d\t", combination(i,j));
        }
        printf("\n");
    }
    return 0;
}


/*
 如有额外需求，可在外层for循环内部开头，也就是内层for循环上面加入：
 
 // 打印空格，使三角形居中
         for (int space = 0; space < height - i - 1; space++)
         {
             printf("  ");
         }
         
 */
