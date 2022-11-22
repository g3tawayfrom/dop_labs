#include<stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

// перечисление
enum paper {
    book,
    magazine,
    newspaper,
    booklet
};

// структура - одна или несколько переменных, сгруппированных под одним именем
struct coordinates {
    int x, y, r;
};

// объединение - это переменная, которая может содержать объекты различных типов и размеров
// оно позволяет хранить разнородные данные в одной и той же области памяти
union KeyBoard {
    unsigned int x;
    struct {
        // (: 1) обозначает размер в битах под каждую из переменных - задаем БИТОВОЕ поле
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

    // %u - десятичное число без знака
    scanf("%u", &k.x);
    printf("NumLock : %d\nCapsLock : %d\nScrollLock : %d", k.NumLock, k.CapsLock, k.ScrollLock);

    return 0;
}