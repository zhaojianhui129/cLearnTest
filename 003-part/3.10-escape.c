//
// Created by qianxun on 16-12-18.
// 使用转移序列
#include <stdio.h>
int main(void)
{
    float salary;

    printf("\a输入你想要的月收入：");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary* 12.0);
    printf("\rGEE!\n");

    return 0;
}

