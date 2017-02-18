//C中的真和假的值
// Created by qianxun on 17-2-13.
//
#include <stdio.h>
int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2);//关系为真的值
    false_val = (10 == 2);//关系为假的值
    printf("true = %d; false = %d \n", true_val, false_val);

    return 0;
}

