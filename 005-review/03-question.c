//
// Created by qianxun on 17-2-12.
//
#include <stdio.h>
#define WEEKDAYS 7
int main(void)
{
    int inDays;
    int rsWeeks,rsDays;

    printf("请输入天数：");
    scanf("%d", &inDays);
    while(inDays > 0){
        rsWeeks = inDays / WEEKDAYS;
        rsDays = inDays % WEEKDAYS;
        printf("%d days are %d weeks, %d days.\n", inDays, rsWeeks, rsDays);
        scanf("%d", &inDays);
    }

    return 0;
}
