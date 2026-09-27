#include <stdio.h>
#include <assert.h>

typedef enum bool{false, true} bool;
int main(void)
{
	bool b = true;
	if(b)
	printf("it's true\n");
	else
	printf("it's false\n");
	return 0;
}
