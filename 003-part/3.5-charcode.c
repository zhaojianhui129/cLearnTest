//
// Created by qianxun on 16-12-6.
// 显示字符的代码编号
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);//用户输入字符
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}

