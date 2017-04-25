//
// Created by qianxun on 17-4-25.
//
#include <stdio.h>
#define SIZE 8

double power(double n, int m);//平方方法声明

int main(void)
{
    int num[SIZE];
    int step = 0;

    printf("设置数组值：\n");
    for (int i = 0; i < SIZE; ++i) {
        num[i] = (int) power(2, i + 1);
    }

    printf("数组的值为：\n");
    do{
        printf("%d\n", num[step]);
        step ++;
    }while (step < SIZE);

    return 0;
}
/**
 * 平方根方法
 * @param n 数据
 * @param m 次幂
 * @return
 */
double power(double n, int m)
{
    double pow = 1;

    for (int i = 0; i < m; ++i) {
        pow *= n;
    }

    return pow;
}
