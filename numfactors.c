#include <stdio.h>

int numfactors(int n);
int main(void)
{
    int n = 12;
    int f = numfactors(n);
    printf("the count of factors of %i is %i\n", n, f);
    return 0;
}
int numfactors(int n)
{
    int cnt = 0;
    for(int x = 1; x <= n; x++)
    {
        if(n % x == 0)
        cnt++;
    }
    return cnt;
}