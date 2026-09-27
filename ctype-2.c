#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c;
	while((c = getchar()) != EOF)
	putchar(toupper(c));
	putchar('\n');
	return 0;
}
