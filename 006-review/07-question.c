//倒序打印一个字符串
// Created by qianxun on 17-2-25.
//
#include <stdio.h>
#include <string.h>
int main(void)
{
    char world[20];

    printf("请输入一个单词：\n");
    scanf("%s", world);

    for (int i = strlen(world); i >= 0; i--) {
        printf("%c", world[i]);
    }
    printf("\n");

    return 0;
}
