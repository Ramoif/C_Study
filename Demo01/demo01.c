#include <stdio.h>

//������

int reNum(int temp);

int main() {
    int a;
    printf("������һ�����֣�");
    scanf("%d", &a);
    printf("������������ǣ�%d�������жϻ�����...\n", a);
    int out = reNum(a);
    if (out == 1) {
        printf("�ǻ�������");
    } else if (out == 0) {
        printf("���ǻ�������");
    } else {
        printf("�����ˣ�");
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
