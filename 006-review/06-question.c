//
// Created by qianxun on 17-2-25.
//
#include <stdio.h>

int main(void) {
    int start, end;
    int actStart, actEnd;

    printf("请输入一个开始数和一个结束数：");
    scanf("%d", &start);
    scanf("%d", &end);
    if (start < end) {
        actStart = start;
        actEnd = end;
    } else {
        actStart = end;
        actEnd = start;
    }
    printf("|-----|-----|-----|\n");
    for (int i = actStart; i <= actEnd; i++) {
        printf("|%5d|%5d|%5d|\n", i, i * i, i * i * i);
        printf("-------------------\n");
    }
    return 0;
}
