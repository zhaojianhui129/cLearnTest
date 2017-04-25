//
// Created by qianxun on 17-4-25.
//
#include <stdio.h>

int main(void)
{
    int lowerNum,upperNum,totalNum;

    printf("请输入下限整数和上限整数：");
    while (scanf("%d%d", &lowerNum, &upperNum) == 2 && lowerNum < upperNum){
        totalNum = 0;
        for (int i = lowerNum; i <= upperNum; ++i) {
            totalNum += (i * i);
        }
        printf("The sums of the squares from %d to %d is %d\n", lowerNum * lowerNum, upperNum * upperNum, totalNum);
        printf("Enter next set of limits:");
    }
    printf("Done\n");

    return 0;
}
