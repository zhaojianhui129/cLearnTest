//
// Created by qianxun on 17-4-25.
//
#include <stdio.h>

int main(void)
{
    int max;
    float total1,total2;

    printf("请输入您要计算的上限数：");
    while (scanf("%d", &max) == 1){
        total1 = 0;
        total2 = 0;
        for (int i = 1; i <= max; i++) {
            total1 += (1.0 / i);
            if (i % 2 == 1){
                total2 += (1.0 / i);
            }else{
                total2 -= (1.0 / i);
            }
        }
        printf("统计无限序列一的值为：%f\n", total1);
        printf("统计无限序列二的值为：%f\n", total2);
        printf("请输入您要计算的上限数：");
    }


    return 0;
}
