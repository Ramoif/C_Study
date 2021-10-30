#include <stdio.h>

//回文数

int reNum(int temp);

int main() {
    int a;
    printf("请输入一个数字：");
    scanf("%d", &a);
    printf("你输入的数字是：%d。正在判断回文数...\n", a);
    int out = reNum(a);
    if (out == 1) {
        printf("是回文数！");
    } else if (out == 0) {
        printf("不是回文数！");
    } else {
        printf("出错了！");
    }
    return 0;
}

int reNum(int temp) {
    if (temp < 0) return 0;

    int pmet = temp;
    int c = 0;
    while (pmet > 0) {
        c = c * 10 + pmet % 10;
        pmet = pmet / 10;
    }
    return c == temp;
}
