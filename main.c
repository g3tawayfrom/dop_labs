#include <stdio.h>
#include "main.h"

int main11() {
    struct Triangle Key;
    scanf("%f %f", &Key.point1.x, &Key.point1.y);
    scanf("%f %f", &Key.point2.x, &Key.point2.y);
    scanf("%f %f", &Key.point3.x, &Key.point3.y);

    printf("Perimeter = %f\n", Perimeter(Key));

    printf("Area = %f\n", Area(Key));

    return 0;
}