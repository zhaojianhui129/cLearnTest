//
// Created by qianxun on 17-1-1.
//
#include <stdio.h>
int main(void)
{
    float num;

    printf("请输入一个浮点数：\n");
    scanf("%f", &num);
    printf("您输入的数字是：%+10.3f 或 %10.3e\n", num, num);

    return 0;
}
