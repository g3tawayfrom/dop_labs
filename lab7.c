#include<stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

// ������������
enum paper {
    book,
    magazine,
    newspaper,
    booklet
};

// ��������� - ���� ��� ��������� ����������, ��������������� ��� ����� ������
struct coordinates {
    int x, y, r;
};

// ����������� - ��� ����������, ������� ����� ��������� ������� ��������� ����� � ��������
// ��� ��������� ������� ����������� ������ � ����� � ��� �� ������� ������
union KeyBoard {
    unsigned int x;
    struct {
        // (: 1) ���������� ������ � ����� ��� ������ �� ���������� - ������ ������� ����
        unsigned int NumLock : 1, CapsLock : 1, ScrollLock : 1;
    };
};

int main7() {
    printf("%d\n", newspaper);
    struct coordinates circle;
    circle.x = 1;
    circle.y = 1;
    circle.r = 2;
    float S_circle = M_PI * circle.r * circle.r;


    printf("%f\n", S_circle);
    union KeyBoard k;

    // %u - ���������� ����� ��� �����
    scanf("%u", &k.x);
    printf("NumLock : %d\nCapsLock : %d\nScrollLock : %d", k.NumLock, k.CapsLock, k.ScrollLock);

    return 0;
}