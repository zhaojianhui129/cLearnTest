//注意花括号的使用
// Created by qianxun on 17-2-13.
//糟糕的代码创建了一个无线循环
#include <stdio.h>
int main(void)
{
    int n = 0;

    while (n < 3)
        printf("n is %d\n", n);
    n++;
    printf("That's all this program does\n");

    return 0;
}


