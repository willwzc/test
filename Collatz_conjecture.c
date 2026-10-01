#include <stdio.h>

int main(void)
{
  int n;
  printf("Input any positive integer to test Collatz conjecture: \n");
  scanf("%i", &n);
  if(n == 1)
  return 0;
  do
  {
    if(n % 2 == 0)
      n = n / 2;
    else
      n = 3 * n + 1;
    printf("%i\n", n);
  } while(n != 1);
return 0;
}
