#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 计算杨辉三角的值
int yanghui(int row, int col) {
    if (col == 1 || col == row) {
        return 1;
    }
    else {
        return yanghui(row - 1, col - 1) + yanghui(row - 1, col);
    }
}

int main() {
    int rows, i, j;

    printf("请输入要打印的行数：");
    scanf("%d", &rows);

    // 打印杨辉三角
    for (i = 1; i <= rows; i++) {
        // 打印每行前面的空格
        for (j = 1; j <= rows - i; j++) {
            printf("   ");
        }
        // 打印每行的值
        for (j = 1; j <= i; j++) {
            printf("%6d", yanghui(i, j));
        }
        printf("\n");
    }

    return 0;
}