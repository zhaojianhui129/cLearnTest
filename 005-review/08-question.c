//
// Created by qianxun on 17-2-12.
//
#include <stdio.h>
int main(void)
{
    int mFirstNum, mSecondNum;

    printf("This program computes moduli.\n");
    printf("Enter an integer to server as the second operand: \n");
    scanf("%d", &mSecondNum);
    printf("Now enter the first operand:\n");
    scanf("%d", &mFirstNum);
    while(mFirstNum > 0){
        printf("%d %% %d is %d \n", mFirstNum, mSecondNum, mFirstNum % mSecondNum);
        printf("Enter next number for first operand (<=0 to quit)\n");
        scanf("%d", &mFirstNum);
    }
    printf("Done\n");

    return 0;
}
