#include <stdio.h>

int main(void)
{
	int n;
	printf("\nHow many numbers do you wish to enter? \n");
	scanf("%i", &n);
	printf("\nEnter %i real numbers: \n", n);
	double num;
	double max;
	scanf("%lf", &max);
	for(int i = 0; i < (n - 1); i++)
	{
		scanf("%lf", &num);
		if(max < num)
		max = num;
	}
	printf("\nMaxium value: %f\n", max);
	return 0;
}