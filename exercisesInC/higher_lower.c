#include <stdio.h>
#include <stdlib.h>
#define CHANCE 10

int main(void)
{
  int s;
  int u;
  printf("\nEnter any integer to start: \n");
  scanf("%i", &s);
  srand(s);
  int t = rand() % 1000 + 1;
  printf("\nGame start! Now you can guess the secret number: \n");
  for(int i = 1; i <= CHANCE; i++)
  {
    scanf("%i", &u);
    if(t == u)
    {  
      printf("You are correct !\n");
      return 0;
    }
    else if(u < t)
    printf("It's smaller than the secret number\n");
    else if(u > t)
    printf("It's greater than the secret number\n");
  }
printf("You lose!\n");
return 0;
}
