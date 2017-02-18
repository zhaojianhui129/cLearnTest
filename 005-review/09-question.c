//
// Created by qianxun on 17-2-12.
//
#include <stdio.h>
int Temperatures(double huashiWendu);
int main(void)
{
    double huashiWendu;

    printf("请输入一个华氏温度：\n");
    while(scanf("%lf", &huashiWendu) == 1)
        Temperatures(huashiWendu);

    return 0;
}
int Temperatures(double huashiWendu)
{
    const float HUASHI_TO_SHESHI = 32.0;
    const float SHESHI_TO_KAISHI = 273.16;

    double sheshiWendu,kaishiWendu;

    sheshiWendu = 5.0/9.0 * (huashiWendu - HUASHI_TO_SHESHI);
    kaishiWendu = sheshiWendu + SHESHI_TO_KAISHI;

    printf("您的温度值是:\n 华氏温度：%.2lf ℉, 摄氏温度：%.2lf ℃, 开氏温度：%.2lf K\n",
        huashiWendu, sheshiWendu, kaishiWendu);
    return 0;
}