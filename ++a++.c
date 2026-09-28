#include <stdio.h>
#include <assert.h>
int main(void)
{
	int a, b = 0, c = 0;
	a = ++b + ++c;
	assert(a == 2);
	printf("%i %i %i\n", a, b, c);
	a = b++ + c++;
	assert(a == 2);
	printf("%i %i %i\n", a, b, c);
	a = b-- + --c;
	assert(a == 3);
	printf("%i %i %i\n", a, b, c);
	return 0;
}
