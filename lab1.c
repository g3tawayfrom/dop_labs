#include <stdio.h>

int main1()
{
    double d;
    char c;

    // scanf - ф-ция ввода переменной с указанием формата символа
    scanf("%lf ", &d);
    // %lf - double
    scanf("%c", &c);
    // c - char

    // & используются рядом с неинизиализированной переменной

    // printf - ф-ция вывода переменных в опред. формате
    printf("%lf %c", d, c);
    return 0;
}