//
// Created by qianxun on 17-2-7.
//
#include <stdio.h>
int main(void)
{
    int num, end;

    printf("请输入一个数字：");
    scanf("%d", &num);
    end = num + 10;
    while (num < end){
        printf("%d \n", num);
        num ++;
    }

    return 0;
}
