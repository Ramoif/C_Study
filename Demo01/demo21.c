#include <stdio.h>
//动态分配需要
#include <stdlib.h>

struct worker {
    char num[10];
    char name[10];
    float salary;
}workerList;

void main(){
    void method1();
    void method2();
    method2();
}


//方法1，数组实现
void method1() {
    struct worker w[100], *p = w;
    int n, i;           //循环控制用
    float sum = 0;      //统计平均工资
    printf("请输入员工数量：");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("请输入第%d个员工信息（职工号、姓名、工资）\n", i + 1);
        scanf("%s%s%f", p->num, p->name, &(p->salary));   //注意这里的工资要取地址，%s不需要。
        sum = sum + p->salary;
        p++;
    }
    printf("平均工资是：%.2f\n", sum / n);
    printf("低于2000元工资的员工信息有：\n");
    /*注意这里要把p指针重置到首位！*/
    p = w;
    printf("职工号\t姓名\t工资\n");
    for (i = 0; i < n; i++) {
        if ((p->salary) < 2000) {
            printf("%s\t%s\t%.2f\n", p->num, p->name, p->salary);
        }
        p++;
    }
}


//方法2，动态存储分配
void method2() {
    struct worker *p, *p1;
    int n, i;
    float sum = 0;
    printf("请输入员工数量：");
    scanf("%d", &n);
    //动态分配空间，上面为自己的写法。下面为教科书的写法，教科书为准。
    //p1=(struct worker *)malloc(n*sizeof(workerList));
    p1=(struct worker *)malloc(n*sizeof(struct worker));
    //p指向p1空间
    p = p1;
    //下面基本相似数组操作
    for (i = 0; i < n; i++) {
        printf("请输入第%d个员工信息（职工号、姓名、工资）\n", i + 1);
        scanf("%s%s%f", p->num, p->name, &(p->salary));   //注意这里的工资要取地址，%s不需要。
        sum = sum + p->salary;
        p++;
    }
    printf("平均工资是：%.2f\n", sum / n);
    printf("低于2000元工资的员工信息有：\n");
    /*注意这里要把p指针重置到首位！*/
    p = p1;
    printf("职工号\t姓名\t工资\n");
    for (i = 0; i < n; i++) {
        if ((p->salary) < 2000) {
            printf("%s\t%s\t%.2f\n", p->num, p->name, p->salary);
        }
        p++;
    }
}


/*
运行结果method1：
     请输入员工数量：3
     请输入第1个员工信息（职工号、姓名、工资）
     1001 张三 1500
     请输入第2个员工信息（职工号、姓名、工资）
     1002 李四 2500
     请输入第3个员工信息（职工号、姓名、工资）
     1003 王五 1999
     平均工资是：1999.67
     低于2000元工资的员工信息有：
     职工号  姓名    工资
     1001    张三    1500.00
     1003    王五    1999.00

运行结果method2：
     请输入员工数量：3
     请输入第1个员工信息（职工号、姓名、工资）
     301 张三 1110
     请输入第2个员工信息（职工号、姓名、工资）
     302 李四 1998
     请输入第3个员工信息（职工号、姓名、工资）
     303 王五 2001
     平均工资是：1703.00
     低于2000元工资的员工信息有：
     职工号  姓名    工资
     301     张三    1110.00
     302     李四    1998.00
*/