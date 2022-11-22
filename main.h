#ifndef MAIN_H
#define MAIN_H
#include<math.h>

struct Point {
    float x; float y;
};

struct Triangle {
    struct Point point1;
    struct Point point2;
    struct Point point3;
};

float Perimeter(struct Triangle Key);

float Area(struct Triangle Key);

#endif