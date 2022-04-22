#include "print.h"
#include <math.h>
#include <stdio.h>

void print_circle(char re[], float x, float y, float r)
{
    printf("it is %s, coordinates: x = %.3f y = %.3f, radius: %.3f\n",
           re,
           x,
           y,
           r);

    printf("lenght of circle: %.3f, square: %.3f\n",
           2 * M_PI * r,
           r * r * M_PI);
}

void print_triangle(
        char re[],
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float x4,
        float y4)
{
    float a, b, c;

    a = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    b = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    c = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    printf("its %s, coordinates: x1 = %.3f y1 = %.3f, x2 = %.3f y2 = "
           "%.3f, x3 = %.3f y3 = %.3f, x4 = %.3f y4 = %.3f\n",
           re,
           x1,
           y1,
           x2,
           y2,
           x3,
           y3,
           x4,
           y4);

    printf("perimeter: %.3f, square: %.3f\n",
           a + b + c,
           fabs((x1 * (y2 - y3) + x2 * (y1 - y3) + x3 * (y1 - y2)) / 2));
}
