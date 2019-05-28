#include <stdio.h>
int arrayAdd (int* arr, int s, int n);

int main()
{
  int aSIZE = 100;
  int aINC = 4;
  int A[aSIZE];

  for(int i = 0; i <= aSIZE; i++)
  {
    A[i] = i*i;
  }

  arrayAdd(A, aSIZE, aINC);
  for(int i = 0; i <= aSIZE; i++)
  {
    printf("%d is %d\n", i, A[i]);
  }
}



int arrayAdd (int* arr, int s, int n)
  {
    for(int i = 0; i <= s; i++)
    {
      arr[i] = arr[i] + n;
    }
    return arr;
  }
