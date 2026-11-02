#include <stdio.h>
#define MIN(A, B) ((A < B) ? (A) : (B))

int main(void)
{
	int j, k, m;
	printf("\nplease input 2 integers\n");
	scanf("%i%i", &j, &k);
	m = MIN (j, k);
	printf("the minimum is %i", m);
	return 0;
}
