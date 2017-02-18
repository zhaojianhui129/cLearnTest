//
// Created by qianxun on 17-2-12.
//
#include <stdio.h>
void printLiFang(double num);
int main(void)
{
    double num;

    printf("请输入一个数字：\n");
    scanf("%lf", &num);
    printLiFang(num);

    return 0;
}
void printLiFang(double num)
{
    printf("%.2lf\n", num * num * num);
}
