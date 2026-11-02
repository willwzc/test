#include <stdio.h>
int main(void)
{
    int x, y, z;
    int min;
    printf("Input any three mumbers");
    if(scanf("%i%i%i", &x, &y, &z) != 3)
    {printf ("please input three integers");
    return 1;
    }

    if(x < y)
    min = x;
    else min = y;
    if(z < min)
    min = z;

    printf("\nthe min is %i", min);
    return 0;
}