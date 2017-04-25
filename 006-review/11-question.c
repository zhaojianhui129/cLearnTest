//
// Created by qianxun on 17-4-25.
//
#include <stdio.h>
#define SIZE 8

int main(void)
{
    int num[SIZE];
    printf("请输入%d个整数\n", SIZE);
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &num[i]);//读取8个整数
    }

    printf("您输入的整数分别是：");

    for (int j = 0; j < SIZE; ++j) {
        printf("%d ", num[j]);
    }
    printf("\n");

    return 0;
}
