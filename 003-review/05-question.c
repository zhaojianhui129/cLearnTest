//
// Created by qianxun on 16-12-18.
//
#include <stdio.h>
int main(void)
{
    int age;
    float yearseconds = 3.156e7;

    printf("请输入您的年龄：");
    scanf("%d", &age);

    printf("\n您年龄对应的秒数是：%.f\n", age * yearseconds);

    return 0;
}
