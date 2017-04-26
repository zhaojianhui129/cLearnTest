//
// Created by qianxun on 17-4-26.
//
#include <stdio.h>
#define MONEY 100

int main(void)
{
    int year=0;
    double daphneMoney = MONEY;
    double deirdreMoney = MONEY;

    while (daphneMoney >= deirdreMoney){
        daphneMoney += (MONEY * 0.1);
        deirdreMoney *= 1.05;
        year++;
    }

    printf("经过%d年后Deirdre的投资额会超过Daphne\n", year);
    printf("此时Deirdre的投资额为：%lf,Daphne的投资额为：%lf\n", deirdreMoney, daphneMoney);

    return 0;
}
