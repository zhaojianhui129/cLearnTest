//
// Created by qianxun on 17-2-7.
//
#include <stdio.h>
const int M_PER_H = 60;//一小时的分钟数
int main(void)
{
    int minutes;
    int h,m;

    printf("Please input minutes value:\n");
    scanf("%d", &minutes);
    while (minutes > 0){
        h = (int) minutes / M_PER_H;
        m = (int) minutes % M_PER_H;
        printf("Your time is %d hours %d minutes\n", h, m);

        printf("Please input minutes value:\n");
        scanf("%d", &minutes);
    }

    return 0;
}
