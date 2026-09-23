#include <stdio.h>
int main(void)
{
    double x, y;
    x = 1.33333333;
    y = 2.55555555;
    printf("x is %.9f\n", x);
    printf("y is %.9f\n", y);
    printf("sum is %.8f\n", x+y);
    return 0;
}
