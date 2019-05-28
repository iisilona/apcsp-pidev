#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;
  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 0;
  float e = 1;
  
  printf("1: The value of d is %f and its address is %d\n", d, &d);
  printf("2: The value of e is %f and its address is %d\n", e, &e);

  float *ptrtod = &d;
  float *ptrtoe = &e;
  float tmp=*ptrtod;
  
  *ptrtod = *ptrtoe;
  *ptrtoe = tmp;

  printf("3: The value of d is %f\n", d);
  printf("4: The value of e is %f\n", e);
}
