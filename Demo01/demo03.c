#include <stdio.h>

// 百金买百鸡类似问题：
// A、B两种鸡卖a金和b金，有c金来买，如何分配浪费最少？

int shop(int a, int b, int c);

int main() {
    int a1 = 56, b1 = 64, c1 = 800;
    shop(a1, b1, c1);
    return 0;
}

/* 首先确定结果需要的内容：
 * 需要x个A产品，y个B产品满足关系 xA + yB = c
 * 本题为 a=56， b=64， c=800
 * 1、确定循环上限个数 c/min —— 用最小值整除总数c（三元运算符）
 * 2、本题只考虑浪费问题，所以循环中只用记录剩余料最少的值，用temp保存。
 * 3、使用暴力循环：从0~上限挨个记录temp数值，更新temp。
 *
 * */

int shop(int a, int b, int c) {
    int x = 0, y = 0, min, count, temp = c;
    min = a > b ? b : a;
    printf("最小值是%d，购买个数上限为%d。\n", min, c / min);
    for (int i = 0; i < (c / min); ++i) {
        count = c - (i * a + ((c - i * a) / b) * b);
        if (count <= temp) {
            x = i;
            y = (c - i * a) / b;
            temp = count;
        }
    }
    printf("A产品%d个，B产品%d个，剩余%dkg原料。", x, y, temp);
    return 0;
}