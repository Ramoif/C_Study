#include <stdio.h>
//malloc��free����Ҫͷ�ļ�
#include <stdlib.h>

#define r 2
#define l 3
#define MaxSizeSqList 10    //[��̬����]-[���Ա�]��󳤶�
#define InitSizeSqList 10   //[��̬����]-[���Ա�]��ʼ����

//[��̬����]-[���Ա�]
typedef struct {
    int data[MaxSizeSqList];
    int length;             //��ǰ����
} SqList1;

//[��̬����]-[���Ա�]
typedef struct {
    int *data;
    int MaxSize;
    int length;
} SqList2;


void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
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
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("��ӡr��l������ȫ�����ݡ���");
}

//��������ָ��
void method3() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("*a=%d, *a+7=%d\n", *a, *a + 7);
}

// ��̬���䣬(�������� & ���š����ǵ�����Ҫ���� & ��)
// C�������޷�ֱ�Ӹ������������&
//����Ҫ����������*�����ü���&��
void InitList2(SqList2 *L) {
    L->data = (int *) malloc(InitSizeSqList * sizeof(int));
    L->length = 0;
    L->MaxSize = InitSizeSqList;
}

//�������� �� i λ�ò������� = e
/*��ѡ������ 1.�ж�i��Χ�Ϸ�    2.�洢�ռ����˷��ش���*/
void ListInsert1(SqList2 *L, int i, int e) {
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i - 1] = e;
    L->length++;
}


//ָ�����21.12.14
void testNode1214_1() {
    int init = 0;
    int init2 = 0;
    int a = 10;
    int b = 20;
    //����1
    int *p = &init;
    printf("p��ַΪ%p,��ֵΪ%d\n", p, *p);
    p = &a;
    printf("p��ַΪ%p,��ֵΪ%d\n", p, *p);
    a = 30;
    printf("&p�ĵ�ַΪ%p,p��ַΪ%p,��ֵΪ%d\n", &p, p, *p);
    printf("��ʱ��a��ֵΪ��%p,%d\n", &a, a);
    printf("��ʱ��init��ֵΪ��%p,%d\n\n", &init, init);

    //����2
    int *q = &init2;
    printf("q��ַΪ%p,��ֵΪ%d\n", q, *q);
    *q = b;
    printf("q��ַΪ%p,��ֵΪ%d\n", q, *q);
    printf("��ʱ��init2��ֵΪ��%p,%d\n\n", &init2, init2);
    b = 40;
    *q = b;
    printf("q��ַΪ%p,��ֵΪ%d\n", q, *q);
    printf("��ʱ��b��ֵΪ��%p,%d\n", &b, b);
    printf("��ʱ��init2��ֵΪ��%p,%d\n\n", &init2, init2);
}

void testNode1214_2() {
    int init = 0;
    int a = 10;
    int *p = &init;
    printf("&p,[p]��ַΪ%p,%p,��ֵΪ%d.\n a��ַΪ%p,��ֵΪ%d.\n init��ַΪ%p,��ֵΪ%d.\n\n", &p, p, *p, &a, a, &init, init);
    p = &a;
    printf("&p,[p]��ַΪ%p,%p,��ֵΪ%d.\n a��ַΪ%p,��ֵΪ%d.\n init��ַΪ%p,��ֵΪ%d.\n\n", &p, p, *p, &a, a, &init, init);
    *p = a;
    printf("&p,[p]��ַΪ%p,%p,��ֵΪ%d.\n a��ַΪ%p,��ֵΪ%d.\n init��ַΪ%p,��ֵΪ%d.\n\n", &p, p, *p, &a, a, &init, init);

}


//����s��ָ�ַ�������
int stringLength(char *s) {
    char *t = s;
    printf("%s\n", t);
    while (*t) {
        t++;
    }
    printf("%s\n", s);
    printf("%s\n", t);
    printf("t=%p,s=%p,t-s=%d\n", t, s, t - s);
    return (t - s);
}

//����ָ�봫ֵ
void test121501() {
    int n1 = 1, n2, *p = &n2, *q = &n1;
    printf("n1��ַΪ%p,p��ֵΪ%d.\n", &n1, n1);
    printf("n2��ַΪ%p,q��ֵΪ%d.\n", &n2, n2);
    printf("&p,[p]��ַΪ%p,%p,p��ֵΪ%d.\n", &p, p, *p);
    printf("&q,[q]��ַΪ%p,%p,q��ֵΪ%d.\n", &q, q, *q);
    printf("\n");
    *p = *q;
    printf("n1��ַΪ%p,p��ֵΪ%d.\n", &n1, n1);
    printf("n2��ַΪ%p,q��ֵΪ%d.\n", &n2, n2);
    printf("&p,[p]��ַΪ%p,%p,p��ֵΪ%d.\n", &p, p, *p);
    printf("&q,[q]��ַΪ%p,%p,q��ֵΪ%d.\n", &q, q, *q);
    /*n1��ַΪ000000000061FDEC,p��ֵΪ1.
    n2��ַΪ000000000061FDE8,q��ֵΪ0.
    &p,[p]��ַΪ000000000061FDE0,000000000061FDE8,p��ֵΪ0.
    &q,[q]��ַΪ000000000061FDD8,000000000061FDEC,q��ֵΪ1.

    n1��ַΪ000000000061FDEC,p��ֵΪ1.
    n2��ַΪ000000000061FDE8,q��ֵΪ1.
    &p,[p]��ַΪ000000000061FDE0,000000000061FDE8,p��ֵΪ1.
    &q,[q]��ַΪ000000000061FDD8,000000000061FDEC,q��ֵΪ1.*/
}

//,
void test1220() {
    int x = 1, y = 2, w = 3, z = 0;
    z = (x, y, w);
    printf("%d,%d,%d,%d", x, y, w, z);

    int a = 3;
    printf("%d", (a += a -= a * a));
}

void test1220_2() {

    int a[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, (*prt)[3] = a, *p = a[0];
    int i;
    for (i = 0; i < 12; i++){
        printf("%d ", *(*prt + i));
    }
    printf("\n%d ", *(*prt + 5));

}

/*����������*/
int main() {
    //��������


    test1220_2();



    //��Ϊ��������
    return 0;
}