#include <stdio.h>

void method1();

int main() {
    printf("�����ҵĵ�һ����Ŀ��\n");
    printf("Hello, World!\n");
    int a[3];
    int b;
    printf("������һ����ֵ��ӡ:");
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
    printf("��������1");
}