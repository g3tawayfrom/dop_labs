#include <stdio.h>

int main5() {
    int m[] = { 34, 45, 56, 67, 78, 89 };
    for (int i = 0; i < 6; i++) {
        // %d - int
        printf("%d %d\n", i, m[i]);
    }

    int a[2][2], b[2][2], c[2][2];

    a[0][0] = 2;
    a[0][1] = 1;
    a[1][0] = 1;
    a[1][1] = 3;

    b[0][0] = 1;
    b[0][1] = 2;
    b[1][0] = 3;
    b[1][1] = 1;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) 
            c[i][j] = 0;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) 
                c[i][j] += a[i][k] * b[k][j];
        }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) 
            printf("%d ", c[i][j]);
        printf("\n");
    }
}