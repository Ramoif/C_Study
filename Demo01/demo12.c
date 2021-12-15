//
// Created by Ramo on 2021/12/10.
//

#include "stdio.h"
//string.h头文件来使用判断长度
#include "string.h"
// 方法2 无需string.h
int huiwen2(char *str) {
    int i = 0, j = 0;

    // 得到长度
    while (str[i] != '\0') {
        i++;
    }
    printf("长度为 : %d\n",i);

    // -1长度，因为数组从0开始
    i--;

    // 核心判别 : j从0开始 i从末尾开始
    for (j = 0; j <= i; i--, j++) {
        if (str[i] != str[j]) {
            // 如果判别两端不等，则跳出循环
            break;
        }
    }
    // 跳出循环的两种情况：
    // 1、右指针已经比左指针要小了 => 成立！
    // 2、不是回文串 => 不成立！
    if(i<=j){
        printf("是回文串！\n");
        return 1;
    } else{
        printf("不是回文串。\n");
        return 0;
    }
}

int main() {
    char s[100] = {0};
    printf("请输入字符串：");
    gets(s);
    huiwen2(s);
}