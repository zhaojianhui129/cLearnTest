//
// Created by qianxun on 17-1-1.
//
#include <stdio.h>
#include <float.h>
int main(void)
{
    double num1;
    float num2;

    num1 = 1.0/3.0;
    num2 = 1.0/3.0;
    printf("*%.6f*%.12f*%.16f*\n", num1, num1, num1);
    printf("*%.6f*%.12f*%.16f*\n", num2, num2, num2);
    printf("FLT_DIG is %d,DBL_DIG is %d.\n", FLT_DIG, DBL_DIG);


    return 0;
}
