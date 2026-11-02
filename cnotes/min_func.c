#include <stdio.h>

int min(int a, int b);
int main(void)
{
    int j, k, m;
    printf("Please input 2 integers\n");
    if(scanf("%i%i", &j, &k)!=2)
    {
        printf("please input two integers");
        return 1;
    }
    m = min(j, k);
    printf("the min between %i and %i is %i\n", j, k, m);
    return 0;
}
int min(int a, int b)
{
    if (a < b)
    return a;
    else 
    return b; 
}