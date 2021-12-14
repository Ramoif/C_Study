//
// Created by Ramo on 2021/12/10.
//

#include <stdio.h>
#include <math.h>
#define N 4


/*测试绝对值*/
void method(){
    int x = 1;
    x = abs(x-10);
    printf("%d\n",x);
}

/*排序*/
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}


void sort(int *n) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - 1; ++j) {

        }
    }
}

int main() {
    /*int num[N] = {};
    printf("请输入%d个数字排序。\n",N);
    for (int i = 0; i < N; ++i) {
        printf("请输入第%d个数字：",i+1);
        scanf("%d",&num[i]);
    }
    sort(&num);*/

    method();

    //可以发现这里p跟ab是同一个空间。
    int ab[4] = {1, 2, 3, 4};
    //p=ab;
    int *p = ab;
    printf("ab: %d %d %d %d\n", ab[0], ab[1], ab[2], ab[3]);
    printf("p: %d %d %d %d\n", p[0], p[1], p[2], p[3]);
    swap(&ab[0], &ab[3]);
    swap(&p[1], &p[2]);
    printf("ab: %d %d %d %d\n", ab[0], ab[1], ab[2], ab[3]);
    printf("p: %d %d %d %d\n", p[0], p[1], p[2], p[3]);
    int a1 = 1, b1 = 2;
    swap(&a1, &b1);
    printf("a1 = %d,b1 = %d\n", a1, b1);
}