//
// Created by qianxun on 16-12-18.
//
#include <stdio.h>

int main(void) {
    float coups;

    printf("请输入杯数：");
    scanf("%f", &coups);

    printf("\n");

    printf("转换为品脱是：%f\n", coups / 2);
    printf("转换为盎司是：%f\n", coups * 8);
    printf("转换为大汤勺是:%f\n", coups * 8 * 2);
    printf("转换为茶勺是:%f\n", coups * 8 * 2 * 3);

    return 0;
}
