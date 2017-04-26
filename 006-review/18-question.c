//
// Created by qianxun on 17-4-26.
//
#include <stdio.h>
#define DUNBARNUMBER 150

int main(void)
{
    int weekNum = 1;
    int firendsNum = 5;

    printf("Rabnud博士的朋友数如下：\n");
    while (firendsNum <= DUNBARNUMBER){
        firendsNum -= weekNum;
        firendsNum *= 2;
        printf("第%2d周的朋友数是：%5d个\n", weekNum, firendsNum);
        weekNum ++;
    }

    return 0;
}
