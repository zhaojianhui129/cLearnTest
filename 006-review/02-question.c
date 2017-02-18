//
// Created by qianxun on 17-2-15.
//
#include <stdio.h>
#define TOTAL_LEVEL 5
int main(void)
{
    int level,num;

    for (level = 1; level <= TOTAL_LEVEL; level++){
        for (num = 0; num < level; num++) {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}
