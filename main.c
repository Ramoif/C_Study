#include <stdio.h>

void method1();

void method2();

void method3();

#define r 2
#define l 3

int main() {
    int x=4;
    printf("%d",x*=x+2);

    return 0;
}

//测试helloworld
void method1() {
    printf("方法测试1");
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
}

//测试二维数组
void method2() {
    int a[r][l] = {0};
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < l; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("打印r行l列数组全部内容↑。");
}

//测试数组指针
void method3() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d %d", *a, *(a + 5));
}