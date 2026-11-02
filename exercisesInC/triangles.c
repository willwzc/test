#include <stdio.h>
#include <assert.h>

void test(void);
enum triangle_type
{
  INVALID,
  RIGHT,
  EQUILATERAL,
  ISOSCELES,
  SCALENE
};
typedef enum triangle_type triangle_type;
triangle_type triangle_classify(int x, int y, int z);

void test(void)
{
  assert(triangle_classify(1, 1, 1) == EQUILATERAL);

  assert(triangle_classify(2, 2, 3) == ISOSCELES);
  assert(triangle_classify(2, 3, 2) == ISOSCELES);
  assert(triangle_classify(3, 2, 2) == ISOSCELES);

  assert(triangle_classify(4, 5, 6) == SCALENE);

  assert(triangle_classify(3, 4, 5) == RIGHT);
  assert(triangle_classify(3, 5, 4) == RIGHT);
  assert(triangle_classify(4, 3, 5) == RIGHT);
  assert(triangle_classify(4, 5, 3) == RIGHT);
  assert(triangle_classify(5, 3, 4) == RIGHT);
  assert(triangle_classify(5, 4, 3) == RIGHT);

  assert(triangle_classify(1, 1, 2) == INVALID);
  assert(triangle_classify(1, 2, 3) == INVALID);
  assert(triangle_classify(3, 2, 1) == INVALID);

  assert(triangle_classify(0, 3, 3) == INVALID);
  assert(triangle_classify(3, 0, 3) == INVALID);
  assert(triangle_classify(3, 3, 0) == INVALID);

  assert(triangle_classify(-1, 2, 2) == INVALID);
  assert(triangle_classify(2, -1, 2) == INVALID);
  assert(triangle_classify(2, 2, -1) == INVALID);
}

int main(void)
{
  int a, b, c;
  printf("\nPlease input the length of each side in a triangle to identify its type: \n");
  test();
  while(1)
  {
    scanf("%i", &a);
    if(a == -999)
    {
      return 0;
    }
    scanf("%i", &b);
    scanf("%i", &c);
    switch(triangle_classify(a, b, c))
    {
      case INVALID:
        printf("This triangle is invalid\n");
        break;

      case RIGHT:
        printf("This triangle is right angled\n");
        break;
      
      case EQUILATERAL:
        printf("This triangle is equilateral\n");
        break;

      case ISOSCELES:
        printf("This triangle is isosceles\n");
        break;
      
      case SCALENE:
        printf("This triangle is scalene\n");
        break;
    }
  }  
  return 0;
}

triangle_type triangle_classify(int x, int y, int z)
{
  if(x + y <= z || x + z <= y || y + z <= x)
  return INVALID;
  else if(x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
  return RIGHT;
  else if( x == y && y == z)
  return EQUILATERAL;
  else if( (x == y && z != y) || (x == z && z != y) || (y == z && x != y) )
  return ISOSCELES;
  else
  return SCALENE;
}
