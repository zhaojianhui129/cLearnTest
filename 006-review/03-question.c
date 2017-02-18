//
// Created by qianxun on 17-2-15.
//
#include <stdio.h>
#define TOTAL_LEVEL 6
int main(void)
{
    int level;
    char ch;

    for (level = 1; level <= TOTAL_LEVEL; level++)
    {
        for (ch = 'F'; ch > 'F' - level; ch--)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
