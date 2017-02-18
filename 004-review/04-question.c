//
// Created by qianxun on 17-1-1.
//
#include <stdio.h>
#define S 100

int main(void)
{
    char name[40];
    float hightCm;
    float hightM;

    printf("请输入您的身高(cm)和姓名：");
    scanf("%f %s", &hightCm, name);
    printf("%s, you are %.2f(M) tall\n", name, hightCm/S);

    return 0;
}
