#include <stdio.h>

int main1()
{
    double d;
    char c;

    // scanf - �-��� ����� ���������� � ��������� ������� �������
    scanf("%lf ", &d);
    // %lf - double
    scanf("%c", &c);
    // c - char

    // & ������������ ����� � �������������������� ����������

    // printf - �-��� ������ ���������� � �����. �������
    printf("%lf %c", d, c);
    return 0;
}