#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  int c = 2;
  int d = 2;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }

  if (a != b)
  {
    printf("a is not equal to b\n");
  }

  if (c > b)
  {
    printf("c is greater than b\n");
  }
  if (c >= d)
  {
    printf("c is greater than or equal to d\n");
  }
  if (a == 0 && b == 1)
  {
    printf("a is equal to 0 and b is equal to 1\n");
  }
  if (a == 0 || c == 1)
  {
    printf("a is  equal to 0 or c is equal to 1\n");
  }
  if (!(a == 2))
  {
    printf("a is not equal to 2\n");
  }
}
