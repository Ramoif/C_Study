//
// Created by Ramo on 2021/12/10.
//

#include "stdio.h"
//string.hͷ�ļ���ʹ���жϳ���
#include "string.h"
// ����2 ����string.h
int huiwen2(char *str) {
    int i = 0, j = 0;

    // �õ�����
    while (str[i] != '\0') {
        i++;
    }
    printf("����Ϊ : %d\n",i);

    // -1���ȣ���Ϊ�����0��ʼ
    i--;

    // �����б� : j��0��ʼ i��ĩβ��ʼ
    for (j = 0; j <= i; i--, j++) {
        if (str[i] != str[j]) {
            // ����б����˲��ȣ�������ѭ��
            break;
        }
    }
    // ����ѭ�������������
    // 1����ָ���Ѿ�����ָ��ҪС�� => ������
    // 2�����ǻ��Ĵ� => ��������
    if(i<=j){
        printf("�ǻ��Ĵ���\n");
        return 1;
    } else{
        printf("���ǻ��Ĵ���\n");
        return 0;
    }
}

int main() {
    char s[100] = {0};
    printf("�������ַ�����");
    gets(s);
    huiwen2(s);
}