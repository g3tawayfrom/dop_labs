#include <stdio.h>
#include <math.h>

int main2()
{
    double x, z1, z2;

    scanf("%lf", &x);

    z1 = (x * x + 2 * x - 3 + ((x + 1) * sqrt(x * x - 9))) / (x * x - 2 * x - 3 + ((x - 1) * sqrt(x * x - 9)));
    z2 = sqrt((x + 3) / (x - 3));

    printf("%lf %lf", z1, z2);
    return 0;
}