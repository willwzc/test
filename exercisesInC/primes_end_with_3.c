#include <stdio.h>
#define N 10000
int main(void)
{
  int found = 0;
  int i = 0;
  int p;
  int three = 0;
  for(int c = 2; i < N; c++)
  {
    found = 0;
    for(int n = 2; n < c; n++)
    {
      if(c % n == 0)
      {
        found++;
      }
    }
    if(found == 0)
    {  
      p = c;
      i++;
      if(p % 10 == 3)
      three++;
    }
  }
printf("\nThe fraction is %f\n", (double)three/i);
return 0;
}