//4.15
// Created by qianxun on 17-1-1.
//如何使用&
#include <stdio.h>
int main(void)
{
    int age;//变量
    float assets;//变量
    char pet[30];//字符数组，用户存储字符串

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);//这是要使用&
    scanf("%s", pet);//字符数组不使用&
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}

