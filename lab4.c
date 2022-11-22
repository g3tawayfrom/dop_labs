#include <stdio.h>

int main4() {
    int a;
    scanf("%d", &a);
    printf("%d\n", 21 <= a && a <= 45);

    int b;
    scanf("%x", &b);
    printf("%x", (b >> 16) & 1);

    return 0;
}