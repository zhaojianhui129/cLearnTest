//
// Created by qianxun on 17-1-1.
//
#include <stdio.h>
int main(void)
{
    float speed,fileSize, seconds;

    printf("请输入你的下载速度(Mb/s):\n");
    scanf("%f", &speed);
    printf("请输入你的文件大小（MB）：\n");
    scanf("%f", &fileSize);
    printf("At %.2f megabits per seconds, a file of %.2f megabytes\n", speed, fileSize);
    seconds = fileSize / speed;
    printf("downloads in %.2f seconds.\n", seconds);

    return 0;
}
