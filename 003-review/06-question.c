//
// Created by qianxun on 16-12-18.
//
#include <stdio.h>

int main(void) {
    float awaterMolecules = 3.0e-23;//一个水分子的重量
    float akuatuo = 950;//一夸脱水的重量
    float kuatuos;
    printf("请输入你需要计算的水的夸脱数：");
    scanf("%f", &kuatuos);
    printf("\n您的水分子数量为：%e\n", (kuatuos * 950) / awaterMolecules);

    return 0;
}
