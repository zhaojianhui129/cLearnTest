//
// Created by qianxun on 17-1-1.
//
#include <stdio.h>
int main(void)
{
    char secondName[20],firstName[30];

    printf("请输入您的名：\n");
    scanf("%s", secondName);
    printf("请输入您的姓:\n");
    scanf("%s", firstName);
    printf("非常好，您的姓名是:%s,%s\n", secondName, firstName);

    return 0;
}
