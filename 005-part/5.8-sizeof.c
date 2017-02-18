//使用sizeof运算符
// Created by qianxun on 17-1-23.
//使用C99新增的%zd转换说明 -- 如果编译器不支持%zd，请将其改成%u或%lu
#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof (int);
    printf("n = %d,n has %zd bytes; all ints hava %zd bytes.\n",
            n, sizeof n, intsize);

    return 0;
}

