#include "stdio.h"

int fibonacii(int fi);

/*斐波那契数列a1+a2=a3*/

int main() {
    int a = 1, b = 1, c = 0, sum = 0;
    sum = a + b;
    for (int i = 0; i < 18; i++) {
        c = a + b;
        a = b;
        b = c;
        sum = sum + c;
    }
    printf("前20项的合为：%d", sum);

    for (int j = 0; j < 20; ++j) {
        printf("第%d个斐波那契数为 : %d\n", j+1, fibonacii(j));
    }


    return 0;
}

/*栈工作求斐波那契数*/

int fibonacii(int fi) {
    if (fi == 0 || fi == 1) {
        return 1;
    }
    return fibonacii(fi - 1) + fibonacii(fi - 2);
}