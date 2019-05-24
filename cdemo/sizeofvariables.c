#include<stdio.h>

int main()
{
  int a = 545;
  char i = 'h';
  float f = 4.27;
  double d = 822.2002;
  signed int x = 2;
  unsigned int y = 6;

  printf("Integer a has a size of %d bytes\n Character i has a size of %d bytes\n", sizeof(a), sizeof(i));
  printf("Float f has a size of %d bytes\n Double d has a size of %d bytes\n", sizeof(f), sizeof(d));
  printf("Singed integer x has a size of %d bytes\n Unsigned int y has a size of %d bytes\n", sizeof(x), sizeof(y));
}

