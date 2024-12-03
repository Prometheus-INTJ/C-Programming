#include <stdio.h>

int main(void)
{
    int matrix[3][4] = {{3,  5,  9,  4},
                        {8,  6,  7,  5},
                        {2,  3,  10, 1}};
    int max_value = matrix[0][0];
    int max_row = 0;
    int max_col = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 4; j++)
            if(max_value < matrix[i][j])
            {
                // update
                max_value = matrix[i][j];
                max_row = i;
                max_col = j;
            }
    printf("最大值是%d\n", max_value);
    printf("在第%d行\n", max_row + 1);
    printf("在第%d列\n", max_col + 1);
    return 0;
}
