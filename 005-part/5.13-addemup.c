//几种常见的语句
// Created by qianxun on 17-2-6.
//
#include <stdio.h>
int main(void) /*计算前20个整数的和*/
{
    int count, sum;//声明

    count = 0;
    sum = 0;
    while (count++ < 20)
        sum = sum + count;
    printf("sum = %d\n", sum);

    return 0;
}
