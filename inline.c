#include <stdio.h>

static inline int MIN(int a, int b);

int main(void)

{
	int j, k, m;
	printf("\nplease input 2 integers\n");
	scanf("%i%i", &j, &k);
	m = MIN (j, k);
	printf("the minimum is %i\n", m);
	return 0;
}

inline int MIN(int a, int b)
{
	if(a < b)
	return a;
	else
	return b;
}
