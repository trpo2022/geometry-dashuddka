#include <ctest.h>
#include <math.h>

CTEST(only_test, check_test_OK)
{
    const double x1 = 1;
    const double y1 = 1;
    const double r = 5;
    const double x2 = 4.47;
    const double y2 = 2.67;
    const double x3 = 8.27;
    const double y3 = 3.18;
    const double x4 = 5.97;
    const double y4 = 0.49;
    int res;

    if (((sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) > r)
         && (sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)) > r)
         && (sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4)) > r))
        || ((sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) < r)
            && (sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)) < r)
            && (sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4)) < r))) {
        res = 1;
    } else {
        res = 0;
    }

    const int exp = 0;
    ASSERT_EQUAL(exp, res);
}

CTEST(only_test, check_test_FAIL)
{
    const double x0 = 1;
    const double y0 = 1;
    const double r = 5;
    const double x1 = 4.47;
    const double y1 = 2.67;
    const double x2 = 8.27;
    const double y2 = 3.18;
    const double x3 = 5.97;
    const double y3 = 0.49;
    int res;

    if (((sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) > r)
         && (sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)) > r)
         && (sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4)) > r))
        || ((sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) < r)
            && (sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)) < r)
            && (sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4)) < r))) {
        res = 1;
    } else {
        res = 0;
    }

    const int exp = 1;
    ASSERT_EQUAL(exp, res);
}
