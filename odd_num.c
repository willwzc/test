#include <stdio.h>

int main(void)
{
	int n;
	printf("\nThis program is for selecting the largest odd integer number from input\nall even numbers will be ignored\n");
	printf("\nHow many integers do you wish to enter? \n");
	scanf("%i", &n);
	printf("\nEnter %i real numbers: \n", n);
	int num;
	int max;
	scanf("%i", &max);
	for(int i = 0; i < (n - 1); i++)
	{
		scanf("%i", &num);
		if(max % 2 == 1 && num % 2 == 1 && max < num)
		max = num;
	}
	printf("\nMaxium value: %i\n", max);
	return 0;
}
