#include <stdio.h>

//�б��ַ�������
void Count();

int main() {
    // �����ַ�����
    char string[128];
    printf("demo02:�������ַ����б����ͣ�");
    // gets������scanf�������ܽ��ܿո�scanf�����ܿո�
    // gets�����س�����ֹͣ�����Ҵӻ�������ɾ���س�����
    gets(string);
    Count(string);
    return 0;
}

//const������ָ��*
void Count(const char *str) {
    int a = 0, b = 0, c = 0, d = 0;
    // ����ĩβͣ
    while (*str != '\0') {
        /* �б���ĸ ps: &&�� ||�� !�� */
        if ((*str >= 'a' && *str <= 'z') || *str >= 'A' && *str <= 'Z') {
            a++;
        }
            /*�б�����*/
        else if (*str >= '0' && *str <= '9') {
            b++;
        }
            /*�б��*/
        else if (*str == ' ') {
            c++;
        } else {
            d++;
        }
        str++;
    }
    printf("�ַ������У���ĸ%d�� ����%d�� �ո�%d�� ����%d��",a,b,c,d);
}