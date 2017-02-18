//
// Created by qianxun on 16-12-18.
// 演示舍入错误
#include <stdio.h>
int main(void)
{
    float a,b;

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;

    printf("%f \n", a);

    return 0;
}

