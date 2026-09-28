#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("Input three integers: ");
	scanf("%i%i%i", &a, &b, &c);
	int sum;
	sum = 2 * (a + b +c) + 7;
	printf("Twice the sum of integers plus 7 is %i !", sum);
	return 0;
}
