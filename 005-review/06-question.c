//
// Created by qianxun on 17-2-12.
//
#include <stdio.h>
int main(void)
{
    int days, sum, count;

    printf("Please input days:\n");
    scanf("%d", &days);

    count = 0;
    sum = 0;
    while(count++ < days)
    {
        sum = sum + count * count;
    }
    printf("You total money is $%d\n", sum);

    return 0;
}

