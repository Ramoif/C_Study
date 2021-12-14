#include <stdio.h>

//回文数

int reNum(int temp);

int main() {
    int a;
    printf("请输入一个数字：");
    scanf("%d", &a);
    printf("你输入的数字是：%d。正在判断回文数...\n", a);
    int out = reNum(a);
    if (out == 1) {
        printf("是回文数！");
    } else if (out == 0) {
        printf("不是回文数！");
    } else {
        printf("出错了！");
    }
    return 0;
}

/*方法1：翻转传入的数，判断和原来是否相同*/
int reNum(int temp) {
    /*如果是负数，则直接判错*/
    if (temp < 0) return 0;

    /*待判断的数用新变量保存，用来和原数判断是否相同*/
    int pmet = temp;

    int c = 0;
    /*循环条件是整除10=0，当数值小于等于10的时候就会退出*/
    while (pmet > 0) {
        //   “ % ” 为取余符号，例如：12321 % 10 = 1
        c = c * 10 + pmet % 10;

        //   退出循环的条件是最后一次pmet已经小于等于10，则整除10后为0（小于等于 10 整除 10 = 0）
        pmet = pmet / 10;

        //   这里举例第一趟循环： c = 0*10 + 1
        //   然后 pmet / 10 = 1232 （ 12321 整除 10余下 1 赋给了 c 变量）
        //   这样c变量的第一位数是传入数值的最后一位数
        //   第二趟就会是： 1*10（个位->十位） + 传入值/10后的最后一位（倒数第二位）
        //   执行完后判断pmet的值是否小于10了
    }
    //   这里的 == 是判断运算符号
    return c == temp;
}
