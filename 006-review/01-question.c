//
// Created by qianxun on 17-2-15.
//
#include <stdio.h>
int main(void)
{
    int index, arr[26];
    char ch;

    for (ch = 'A',index = 0; ch < 'A' + 26; ch++, index++)
    {
        arr[index] = ch;
    }

    for (int i = 0; i < 26; i++)
        printf("%4c", arr[i]);
    printf("\n");
    return 0;
}

