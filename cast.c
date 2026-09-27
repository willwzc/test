#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void)
{
	double r;
	printf("\nplease input the radius of the ball\n");
	scanf("%lf", &r);
	r = fabs(r);
	double v = 4.0 / 3.0 * PI * pow(r, (double)3);
	printf("\nthe volume of the ball is %lf\n", v);
	printf("\nthe volume of the ball is %.2lf\n", v);
	printf("\nthe volume of the ball is %i\n", (int) v);
	printf("\nthe volume of the ball is %.0lf\n", v);
	printf("\nthe volume of the ball is %lf\n", round(v));
	return 0;
}
