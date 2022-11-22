#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main8() {
    unsigned n;
    scanf("%d", &n);

    char* s1 = (char*)malloc(sizeof(char) * (100));

    for (int i = 0; i < n; i++) {
        // getchar() - ввод символов
        *(s1 + i) = getchar();
    }

    // аналог puts(string) - вывод строки
    for (int i = 0; i < n; i++) {
        printf("%c", s1[i]);
    }

    printf("\n");

    char* s2 = (char*)malloc(sizeof(char) * (100));

    for (int i = 0; i < n; i++) {
        *(s2 + i) = getchar();
    }

    for (int i = 0; i < n; i++) {
        printf("%c", s2[i]);
    }

    printf("\n");

    int x;
    scanf("%d", &x);

    // strncat - сложение первой строки и n первых символов второй строки
    strncat(s1, s2, x);

    for (int i = 0; i < n + x; i++) {
        printf("%c", s1[i]);
    }

    printf("\n");
    
    // strcmp - сравнение двух строк: 0 - строки идентичны, 1 - различны
    printf("%d\n", strcmp(s1, s2));

    // strncpy - копирование n первых символов второй строки в первую строку
    strncpy(s1, s2, x);

    for (int i = 0; i < n + x; i++) {
        printf("%c", s1[i]);
    }

    printf("\n");

    char ch;
    ch = getchar();

    // strchr - поиск последнего вхождения символа в строку: возвращает указатель на искомый символ
    printf("%d\n", strchr(s1, ch) - s1 + 1);

    // strcspn - определяет длину первой строки без элементов второй
    printf("%d", strcspn(s1, s2));

    free(s1);
    free(s2);

    return 0;
}