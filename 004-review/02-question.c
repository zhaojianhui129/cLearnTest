//
// Created by qianxun on 17-1-1.
//
#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[50];
    int width;//姓名宽度

    printf("请输入您的名和姓：\n");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    width = strlen(name);
    printf("\"%*s\"\n", width + 3, name);

    return 0;
}
