//
// Created by qianxun on 17-2-25.
//
#include <stdio.h>

float fff(float fl1, float fl2);

int main(void)
{
    float fl1,fl2;

    printf("请输入两个浮点数:(q or quit)");
    while (scanf("%f%f", &fl1, &fl2) == 2){
        printf("(fl1-fl2)/(fl1*fl2)=%5.2f\n", fff(fl1, fl2));
    }

    return 0;
}

float fff(float fl1, float fl2){
    float rs;

    rs = (fl1-fl2)/(fl1*fl2);

    return rs;
}