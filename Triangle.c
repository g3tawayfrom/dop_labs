#include <math.h>
#include "main.h"

float Perimeter(struct Triangle Key) {
    return sqrt(pow(Key.point1.x - Key.point2.x, 2)
        + pow(Key.point1.y - Key.point2.y, 2)) + 
        sqrt(pow(Key.point2.x - Key.point3.x, 2)
            + pow(Key.point2.y - Key.point3.y, 2)) +
        sqrt(pow(Key.point3.x - Key.point1.x, 2)
            + pow(Key.point3.y - Key.point1.y, 2));
}
float Area(struct Triangle Key) {
    float p = Perimeter(Key) / 2;
    return sqrt(p * (p - sqrt(pow(Key.point1.x - Key.point2.x, 2)
        + pow(Key.point1.y - Key.point2.y, 2)))*
        (p - sqrt(pow(Key.point2.x - Key.point3.x, 2)
            + pow(Key.point2.y - Key.point3.y, 2))) *
        (p - sqrt(pow(Key.point3.x - Key.point1.x, 2)
            + pow(Key.point3.y - Key.point1.y, 2))));
}