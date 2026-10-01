#include <stdio.h>

int main(void)
{
  int o;
  int i;
  printf("How much money would you like ?\n");
  do
  {
    scanf("%i", &o);
    i = (o / 20);
    if(o % 20 != 0)
      printf("I can give you %i or %i, try again.\n", 20 * i, 20 * (i +1));
  } while(o % 20 != 0);
  printf("OK, dispensing %i...\n", o);
  return 0;
}
