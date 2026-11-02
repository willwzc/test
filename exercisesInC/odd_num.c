#include <stdio.h>
#include <assert.h>

int odd_found(int x);
void test(void);
int main(void)
{
	test();
	int n;
	printf("\nThis program is for selecting the largest odd integer number from input\nall even numbers will be ignored\n");
	printf("\nHow many integers do you wish to enter? \n");
	scanf("%i", &n);
	printf("\nEnter %i integers: \n", n);
	int num;
	int max;
	int found_odd = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%i", &num);
		if(odd_found(num) == 1)
		{
			if(found_odd == 0)
			{
				max = num;
				found_odd = 1;
			}
			else
			{
				if(num > max)
				max = num;
			}
		}
	}
	if(found_odd == 0)
	{
		printf("Please input at least one odd number!");
		return 1;
	}
	printf("\nMaximum value: %i\n", max);
	return 0;
}

void test(void)
{
	assert(odd_found(5) == 1);
	assert(odd_found(4) == 0);
	assert(odd_found(0) == 0);
	assert(odd_found(-5) == 1);
}
int odd_found(int x)
{
	if(x % 2 != 0)
	return 1;
	else
	return 0;
}
