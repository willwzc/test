#include <stdio.h>
int main(void)
{
  int found = 0;
  int i = 0;
  int p;
  for(int c = 2; i < 3000; c++)
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
      printf("\nthe %ith primer is %i\n", i, p);
    }
  }
return 0;
}