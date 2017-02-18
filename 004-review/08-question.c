//
// Created by qianxun on 17-1-1.
//
#include <stdio.h>
#define GALLON_TO_RISE 3.785
#define MILE_TO_KM 1.609
int main(void)
{
    float distance,oilVolume,fuelUse;

    printf("请输入您旅行的距离（英里）:");
    scanf("%f", &distance);
    printf("请输入您旅行消耗的汽油量（加仑）：");
    scanf("%f", &oilVolume);
    printf("您的燃油消耗是:%.1f(英里/加仑)\n", distance/oilVolume);
    fuelUse = (distance * GALLON_TO_RISE) / (oilVolume * MILE_TO_KM * 100);
    printf("您的燃油消耗是:%.1f(升/100公里)\n", fuelUse);

    return 0;
}
