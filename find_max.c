#include <stdio.h>

double max(double num);

int main(void)
{
	int n;
	printf("\nHow many numbers do you wish to enter? \n");
	scanf("%i", &n);
	printf("\nEnter %i real numbers: \n", n);
	double min = 0;
	double num;
	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &num);
		double maxium = max(num);
	}
	printf("\nMaxium value: \n", maxium);
	return 0;
}

double max(double num)
{
	double x;
	if(x <= num)
	{
		x = num;
		return x;
	}
	else
	return x;
}
