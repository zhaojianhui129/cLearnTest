//
// Created by qianxun on 17-4-26.
//
#include <stdio.h>
#define SIZE 8

int main()
{
    double arr1[SIZE], arr2[SIZE];
    double total;

    printf("请输入8个数字：\n");
    for (int i = 0; i < SIZE; ++i) {
        scanf("%lf", &arr1[i]);
    }
    printf("给第二个数组赋值.\n");
    for (int j = 0; j < SIZE; ++j) {
        total = 0;
        for (int k = 0; k < j + 1; ++k) {
            total += arr1[k];
        }
        arr2[j] = total;
    }
    printf("您输入的数据是：\n");
    for (int l = 0; l < SIZE; ++l) {
        printf("%10.2lf", arr1[l]);
    }
    printf("\n");
    for (int m = 0; m < SIZE; ++m) {
        printf("%10.2lf", arr2[m]);
    }

    return 0;
}
