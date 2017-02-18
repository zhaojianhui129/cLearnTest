//
// Created by qianxun on 17-1-1.
//
#include <stdio.h>
#include <string.h>
int main(void)
{
    char secondName[30],firstName[20];
    int secondLen,firstLen;

    printf("请输入名：\n");
    scanf("%s", secondName);
    printf("请输入姓:\n");
    scanf("%s", firstName);

    secondLen = strlen(secondName);
    firstLen = strlen(firstName);

    printf("%s %s\n",secondName, firstName);
    printf("%*d %*d\n", secondLen, secondLen, firstLen, firstLen);
    printf("%s %s\n",secondName, firstName);
    printf("%-*d %-*d\n", secondLen, secondLen, firstLen, firstLen);

    return 0;
}
