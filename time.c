#include <stdio.h>

int main(void)
{
  int h1, m1;
  int h2, m2;

  int t1;
  int t2;
  int diff;

  printf("\nEnter two times: \n");
  scanf("%i:%i %i:%i", &h1, &m1, &h2, &m2);
  t1 = h1 * 60 + m1;
  t2 = h2 * 60 + m2;
  diff = t2 - t1;
  if(diff < 0)
  diff = diff + 24 * 60;
  printf("Difference is : %02i:%02i\n", diff / 60, diff % 60);
  return 0;
}