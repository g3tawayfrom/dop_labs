#include <stdio.h>
#include <math.h>

int NOD(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
}

int NOK(int a, int b) {
    return abs(a * b) / NOD(a, b);
}

int* arrOfNumber(int x) {

    int t = x;
    int n = 0;

    while (t > 0) {
        t = t / 10;
        n++;
    }

    // роль static - оставить массив в памяти до конца программы, а не до конца функции
    static int* r;
    r = (int*)malloc(sizeof(int) * n);

    for (int i = n - 1; i >= 0; i--) {
        r[i] = x % 10;
        x = x / 10;
    }

    return r;
}

int main10() {
    int a, b, x;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);

    printf("%d\n", NOD(a, b));

    printf("%d\n", NOK(a, b));

    int* p;

    int t = x;
    int n = 0;

    while (t > 0) {
        t = t / 10;
        n++;
    }

    p = arrOfNumber(x);

    for (int i = 0; i < n; i++) {
        printf("%d\n", *(p + i));
    }

    free(p);

    return 0;
}