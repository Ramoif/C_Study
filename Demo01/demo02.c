#include <stdio.h>

//判别字符串类型
void Count();

int main() {
    // 定义字符数组
    char string[128];
    printf("demo02:请输入字符串判别类型：");
    // gets类似于scanf，但他能接受空格，scanf不接受空格。
    // gets遇到回车符就停止，并且从缓冲区中删除回车符。
    gets(string);
    Count(string);
    return 0;
}

//const代表常量指针*
void Count(const char *str) {
    int a = 0, b = 0, c = 0, d = 0;
    // 读到末尾停
    while (*str != '\0') {
        /* 判别字母 ps: &&与 ||或 !非 */
        if ((*str >= 'a' && *str <= 'z') || *str >= 'A' && *str <= 'Z') {
            a++;
        }
            /*判别数字*/
        else if (*str >= '0' && *str <= '9') {
            b++;
        }
            /*判别空*/
        else if (*str == ' ') {
            c++;
        } else {
            d++;
        }
        str++;
    }
    printf("字符串含有：字母%d个 数字%d个 空格%d个 其他%d个",a,b,c,d);
}