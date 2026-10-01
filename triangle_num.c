#include <stdio.h>

int main(void)
{
  int o;
  int t = 0;
  printf("Input how many triangle numbers you want to print: \n");
  scanf("%i", &o);
  for(int i = 1; i <= o; i++)
  {
    t = t + i;
    printf("Triangle number %i is %i\n", i, t);
  }
  return 0;
}
