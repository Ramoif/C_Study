#include <stdio.h>

void method1();

#define r 2
#define l 3

int main() {



    return 0;
}

//����helloworld
void method1() {
    printf("��������1");
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
}

//���Զ�ά����
void method2() {
    int a[r][l] = {0};
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < l; ++j) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("��ӡr��l������ȫ�����ݡ���");
}