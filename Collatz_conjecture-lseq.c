#include <stdio.h>

int main(void)
{
  int o;
  int i = 1;
  for(int n = 1; n <= 10000000; n++)
  {
    do
    {
      if(n % 2 == 0)
      {  
        o = n/2;
        i++;
        printf("%i\n", o);
      }
      else if(o == 1)
      {  
        printf("%i\n", o);
        printf("The length of hailstone sequence is %i \n", i);
      }
      else if(n % 2 == 1)
      {  
        o = 3 * n + 1;
        i++;
        printf("%i\n", o);
      }
    }while(o != 1);
  }
return 0;
}
