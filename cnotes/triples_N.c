#include <stdio.h>
#define N 7
int main(void)
{
int cnt = 0;
for(int a = 0; a <= N; a++)
{
for(int b = 0; b <= N; b++)
{
for(int c = 0; c <= N; c++)
{if(a+b+c == N)
{
cnt++;
printf("%i %i %i", a, b, c);
printf("\nthe total combination is %i\n", cnt);

}
}
}
}
return 0;
}
