//
// Created by qianxun on 16-12-31.
//
#include <stdio.h>

int main(void) {
    int age;

    printf("Please Input You age:\n");
    scanf("%d", &age);
    printf("Your Age is:%d, Your Age days is:%d\n", age, age * 365);

    return 0;
}
