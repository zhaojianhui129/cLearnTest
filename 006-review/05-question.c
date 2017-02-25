//
// Created by qianxun on 17-2-25.
//
#include <stdio.h>

int main(void) {
    char ch;

    printf("Please char:");
    scanf("%c", &ch);

    for (int line = 0; line <= ch - 'A'; line++) {
        //打印空格
        for (char space = 0; space < ch - 'A' - line; space++) {
            printf(" ");
        }
        //升序打印字母
        for (char ascch = 'A'; ascch <= 'A' + line; ascch++) {
            printf("%c", ascch);
        }
        //降序打印字母
        for (char descch = 'A' + line - 1; descch >= 'A'; descch--) {
            printf("%c", descch);
        }
        printf("\n");
    }

    return 0;
}

