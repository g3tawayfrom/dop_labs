#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main8() {
    unsigned n;
    scanf("%d", &n);

    char* s1 = (char*)malloc(sizeof(char) * (100));

    for (int i = 0; i < n; i++) {
        // getchar() - ���� ��������
        *(s1 + i) = getchar();
    }

    // ������ puts(string) - ����� ������
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

    // strncat - �������� ������ ������ � n ������ �������� ������ ������
    strncat(s1, s2, x);

    for (int i = 0; i < n + x; i++) {
        printf("%c", s1[i]);
    }

    printf("\n");
    
    // strcmp - ��������� ���� �����: 0 - ������ ���������, 1 - ��������
    printf("%d\n", strcmp(s1, s2));

    // strncpy - ����������� n ������ �������� ������ ������ � ������ ������
    strncpy(s1, s2, x);

    for (int i = 0; i < n + x; i++) {
        printf("%c", s1[i]);
    }

    printf("\n");

    char ch;
    ch = getchar();

    // strchr - ����� ���������� ��������� ������� � ������: ���������� ��������� �� ������� ������
    printf("%d\n", strchr(s1, ch) - s1 + 1);

    // strcspn - ���������� ����� ������ ������ ��� ��������� ������
    printf("%d", strcspn(s1, s2));

    free(s1);
    free(s2);

    return 0;
}