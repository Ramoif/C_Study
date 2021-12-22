#include <stdio.h>
//malloc、free所需要头文件
#include <stdlib.h>

#define r 2
#define l 3
#define MaxSizeSqList 10    //[静态分配]-[线性表]最大长度
#define InitSizeSqList 10   //[动态分配]-[线性表]初始长度

//[静态分配]-[线性表]
typedef struct {
    int data[MaxSizeSqList];
    int length;             //当前长度
} SqList1;

//[动态分配]-[线性表]
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
    printf("*a=%d, *a+7=%d\n", *a, *a + 7);
}

// 动态分配，(方法不用 & 符号。但是调用需要加上 & ！)
// C语言中无法直接给方法参数添加&
//【需要给方法加上*，调用加上&】
void InitList2(SqList2 *L) {
    L->data = (int *) malloc(InitSizeSqList * sizeof(int));
    L->length = 0;
    L->MaxSize = InitSizeSqList;
}

//插入数据 第 i 位置插入数据 = e
/*可选操作： 1.判断i范围合法    2.存储空间满了返回错误*/
void ListInsert1(SqList2 *L, int i, int e) {
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i - 1] = e;
    L->length++;
}


//指针测试21.12.14
void testNode1214_1() {
    int init = 0;
    int init2 = 0;
    int a = 10;
    int b = 20;
    //测试1
    int *p = &init;
    printf("p地址为%p,数值为%d\n", p, *p);
    p = &a;
    printf("p地址为%p,数值为%d\n", p, *p);
    a = 30;
    printf("&p的地址为%p,p地址为%p,数值为%d\n", &p, p, *p);
    printf("此时的a数值为：%p,%d\n", &a, a);
    printf("此时的init数值为：%p,%d\n\n", &init, init);

    //测试2
    int *q = &init2;
    printf("q地址为%p,数值为%d\n", q, *q);
    *q = b;
    printf("q地址为%p,数值为%d\n", q, *q);
    printf("此时的init2数值为：%p,%d\n\n", &init2, init2);
    b = 40;
    *q = b;
    printf("q地址为%p,数值为%d\n", q, *q);
    printf("此时的b数值为：%p,%d\n", &b, b);
    printf("此时的init2数值为：%p,%d\n\n", &init2, init2);
}

void testNode1214_2() {
    int init = 0;
    int a = 10;
    int *p = &init;
    printf("&p,[p]地址为%p,%p,数值为%d.\n a地址为%p,数值为%d.\n init地址为%p,数值为%d.\n\n", &p, p, *p, &a, a, &init, init);
    p = &a;
    printf("&p,[p]地址为%p,%p,数值为%d.\n a地址为%p,数值为%d.\n init地址为%p,数值为%d.\n\n", &p, p, *p, &a, a, &init, init);
    *p = a;
    printf("&p,[p]地址为%p,%p,数值为%d.\n a地址为%p,数值为%d.\n init地址为%p,数值为%d.\n\n", &p, p, *p, &a, a, &init, init);

}


//计算s所指字符串长度
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

//测试指针传值
void test121501() {
    int n1 = 1, n2, *p = &n2, *q = &n1;
    printf("n1地址为%p,p数值为%d.\n", &n1, n1);
    printf("n2地址为%p,q数值为%d.\n", &n2, n2);
    printf("&p,[p]地址为%p,%p,p数值为%d.\n", &p, p, *p);
    printf("&q,[q]地址为%p,%p,q数值为%d.\n", &q, q, *q);
    printf("\n");
    *p = *q;
    printf("n1地址为%p,p数值为%d.\n", &n1, n1);
    printf("n2地址为%p,q数值为%d.\n", &n2, n2);
    printf("&p,[p]地址为%p,%p,p数值为%d.\n", &p, p, *p);
    printf("&q,[q]地址为%p,%p,q数值为%d.\n", &q, q, *q);
    /*n1地址为000000000061FDEC,p数值为1.
    n2地址为000000000061FDE8,q数值为0.
    &p,[p]地址为000000000061FDE0,000000000061FDE8,p数值为0.
    &q,[q]地址为000000000061FDD8,000000000061FDEC,q数值为1.

    n1地址为000000000061FDEC,p数值为1.
    n2地址为000000000061FDE8,q数值为1.
    &p,[p]地址为000000000061FDE0,000000000061FDE8,p数值为1.
    &q,[q]地址为000000000061FDD8,000000000061FDEC,q数值为1.*/
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

/*测试主函数*/
int main() {
    //测试区域


    test1220_2();



    //上为测试区域
    return 0;
}