#include "stdio.h"

int fibonacii(int fi);

/*쳲���������a1+a2=a3*/

int main() {
    int a = 1, b = 1, c = 0, sum = 0;
    sum = a + b;
    for (int i = 0; i < 18; i++) {
        c = a + b;
        a = b;
        b = c;
        sum = sum + c;
    }
    printf("ǰ20��ĺ�Ϊ��%d", sum);

    for (int j = 0; j < 20; ++j) {
        printf("��%d��쳲�������Ϊ : %d\n", j+1, fibonacii(j));
    }


    return 0;
}

/*ջ������쳲�������*/

int fibonacii(int fi) {
    if (fi == 0 || fi == 1) {
        return 1;
    }
    return fibonacii(fi - 1) + fibonacii(fi - 2);
}