//计算多个不同鞋码对应的脚长
// Created by qianxun on 17-1-23.
//
#include <stdio.h>
#define ADJUST 7.31 //字符常量
int main(void)
{
    const double SCALE = 0.333;//const变量
    double shoe, foot;

    printf("Shoe size  (men's)     foot length\n");
    shoe = 3.0;
    while(shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inhes\n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, wear it.\n");

    return 0;
}
