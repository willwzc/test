#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int median = RAND_MAX / 2;
	int minus_cnt = 0;
	int plus_cnt = 0;
	for(int i = 0; i < 500; i++)
	{
		int r = rand();
		if(r < median)
		minus_cnt++;
		else if (r > median)
		plus_cnt++;
	}
	printf("\nThe difference of plus_cnt and minus_cnt is %i\n", minus_cnt - plus_cnt);
	return 0;
}
