#include <stdio.h>

// �ٽ���ټ��������⣺
// A��B���ּ���a���b����c��������η����˷����٣�

int shop(int a, int b, int c);

int main() {
    int a1 = 56, b1 = 64, c1 = 800;
    shop(a1, b1, c1);
    return 0;
}

/* ����ȷ�������Ҫ�����ݣ�
 * ��Ҫx��A��Ʒ��y��B��Ʒ�����ϵ xA + yB = c
 * ����Ϊ a=56�� b=64�� c=800
 * 1��ȷ��ѭ�����޸��� c/min ���� ����Сֵ��������c����Ԫ�������
 * 2������ֻ�����˷����⣬����ѭ����ֻ�ü�¼ʣ�������ٵ�ֵ����temp���档
 * 3��ʹ�ñ���ѭ������0~���ް�����¼temp��ֵ������temp��
 *
 * */

int shop(int a, int b, int c) {
    int x = 0, y = 0, min, count, temp = c;
    min = a > b ? b : a;
    printf("��Сֵ��%d�������������Ϊ%d��\n", min, c / min);
    for (int i = 0; i < (c / min); ++i) {
        count = c - (i * a + ((c - i * a) / b) * b);
        if (count <= temp) {
            x = i;
            y = (c - i * a) / b;
            temp = count;
        }
    }
    printf("A��Ʒ%d����B��Ʒ%d����ʣ��%dkgԭ�ϡ�", x, y, temp);
    return 0;
}