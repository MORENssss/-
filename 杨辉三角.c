#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ����������ǵ�ֵ
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

    printf("������Ҫ��ӡ��������");
    scanf("%d", &rows);

    // ��ӡ�������
    for (i = 1; i <= rows; i++) {
        // ��ӡÿ��ǰ��Ŀո�
        for (j = 1; j <= rows - i; j++) {
            printf("   ");
        }
        // ��ӡÿ�е�ֵ
        for (j = 1; j <= i; j++) {
            printf("%6d", yanghui(i, j));
        }
        printf("\n");
    }

    return 0;
}