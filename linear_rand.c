#include <stdio.h>
#include <stdlib.h>
#define LOOPS 20
#define A 5
#define C 5
#define M 20

int main(void)
{
	int i;
	int r;
	int seed = 1;

	for(i = 0; i < LOOPS; i++)
	{
		seed = (A * seed + C) % M;
	
		srand(seed);
		r = rand() % M;
		printf("%i\n",r);
	}
	return 0;
}
