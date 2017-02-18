//
// Created by qianxun on 16-12-18.
//
#include <stdio.h>
int main(void)
{
    float ayincun = 2.54;//一英寸等于2.54厘米
    float hight;

    printf("请输入您的身高（英寸）:");
    scanf("%f", &hight);
    printf("您的身高是：%.2fcm\n", hight * ayincun);

    return 0;
}
