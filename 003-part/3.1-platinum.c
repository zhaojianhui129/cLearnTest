/*c语言练习代码*/
#include <stdio.h>

int main(void)
{
    float weight;//你的体重
    float value;//相等重量的白金价格
    printf("Are you worth your weight in plantinum?\n");
    printf("Let's check it out,\n");
    printf("Plaese enter your weight in pounds:");

    //获取用户的输入
    scanf("%f", &weight);
    //假设白金的价格时每盎司￥1700
    //14.5833用户把英镑常衡盎司转换为金衡盎司
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}