#include <stdio.h>

void method1();

int main() {
    printf("这是我的第一个项目。\n");
    printf("Hello, World!\n");
    int a[3];
    int b;
    printf("请输入一个数值打印:");
    scanf("%d", &b);
    printf("%d\n", b);
    for (int i = 0; i < 3; ++i) {
        a[i] = i;
        printf("a[%d] = %d\n", i, a[i]);
    }
    method1();
    return 0;
}

void method1() {
    printf("方法测试1");
}