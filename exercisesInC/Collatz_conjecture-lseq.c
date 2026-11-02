#include <stdio.h>

int main(void)
{
  int l = 0;
  int m;
  long long g = 0;
  int x;
  for(int n = 1; n <= 10000000; n++)
  {
    long long o = n;
    int i = 0;
    do
    {
      if(o % 2 == 0)
      {
        o = o/2;
      }
      else if(o != 1)
      {  
        o = 3 * o + 1;
      }
      if(o > g)
      {
        g = o;
        x = n;
      }
      if(o != 1 || n != 1)
      i++;
    }while(o != 1);
    if(i > l)
    {
      l = i;
      m = n;
    }
  }
printf("the longest length is %i for initial number %i\n", l, m);
printf("the largest number is %lli for initial number %i\n", g, x);
return 0;
}
