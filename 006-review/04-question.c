//
// Created by qianxun on 17-2-15.
//
#include <stdio.h>
#define TOTAL_LEVEL 6
int main(void)
{
    int level;
    char ch, startCh;

    startCh = 'A';
    for (level = 0; level < TOTAL_LEVEL; level++) {
        for (ch = startCh; ch <= startCh + level; ch++) {
            printf("%c", ch);
        }
        startCh = ch;
        printf("\n");
    }
    return 0;
}
