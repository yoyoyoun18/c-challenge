#include <stdio.h>
int main() {
    double temperature = 0;
    printf("�µ��� �Է��ϼ���: "); // print�� �ƴ� printf ���
    scanf_s("%lf", &temperature); // %d�� �ƴ� %lf ��� (double��)
    printf("���� �µ��� �������� ȭ���� ��ȯ�ϸ� %.1f�� �Դϴ�.\n", temperature * 1.8 + 32); // %d�� �ƴ� %.1f ���
    return 0;
}