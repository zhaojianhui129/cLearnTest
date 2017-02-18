//
// Created by qianxun on 17-2-12.
//
#include <stdio.h>
#define CM_TO_FEET 0.032808399
#define CM_TO_INCHES 0.3937007874
int main(void)
{
    float youHeight;

    printf("Enter a height in centimeters:\n");
    scanf("%f", &youHeight);
    while(youHeight > 0){
        printf("%.1f cm = %.0f feet, %.2f inches\n",
            youHeight, youHeight * CM_TO_FEET, youHeight * CM_TO_INCHES);
        printf("Enter a height in centimeters (<=0 to quit):\n");
        scanf("%f", &youHeight);
    }
    printf("bye\n");

    return 0;
}
