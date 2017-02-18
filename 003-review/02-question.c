//
// Created by qianxun on 16-12-18.
// 要求提示输入一个ascii码值，然后打印输入的字符
#include <stdio.h>
int main(void)
{
    int ascii;

    printf("请输入一个ASCII码值：\n");

    scanf("%d", &ascii);

    printf("您输入的ASICC码对应的字符是:%c\n", ascii);

    return 0;
}

