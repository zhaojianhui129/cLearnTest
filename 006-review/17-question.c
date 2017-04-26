//
// Created by qianxun on 17-4-26.
//
#include <stdio.h>
#define MONEY 100
int main(void)
{
    int year = 0;
    double totalMoney = MONEY;

    while (totalMoney > 0){
        totalMoney *= 1.08;
        totalMoney -= 10;
        year ++;
    }
    printf("Chuckie Lucky在%d年后会取完账户的钱.\n", year);

    return 0;
}
