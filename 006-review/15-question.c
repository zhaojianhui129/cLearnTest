//
// Created by qianxun on 17-4-26.
//
#include <stdio.h>
#define SIZE 255
int main(void)
{
    int step = 0;
    char curChr;
    char strArr[SIZE];

    while (scanf("%c", &curChr) == 1 && curChr != '\n' && step < SIZE){
        strArr[step] = curChr;
        step ++;
    }
    printf("您输入的字符串反转输出：\n");
    for (int i = step - 1; i >= 0; i--) {
        printf("%c", strArr[i]);
    }
    printf("\n");

    return 0;
}
