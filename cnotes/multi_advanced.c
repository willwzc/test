#include <stdio.h>
#include <assert.h>

void test(void);
int mult(int a, int b);

int main (void)
{
	test();
	return 0;
}

int mult(int a, int b)
{
	int product;
	if(b > 0)
	product = a + mult(a, (b - 1));
	else return 0;
	return product;
}

void test(void)
{
	assert(mult(3, 5) == 15);
	assert(mult(5, 3) == 15);
	assert(mult(3, 0) == 0 );
	assert(mult(0, 3) == 0 );
	assert(mult(1, 8) == 8 );
	assert(mult(8, 1) == 8 );
}
