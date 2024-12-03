# include <stdio.h>

int main(void)
{
    int row = 6;
    int col = 6;
    int initial = 1; //矩阵左上角第一个数字
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", initial);
            initial++;
        }
        printf("\n");
    }
    return 0;
}
