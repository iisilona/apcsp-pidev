#include <stdio.h>
float areaofcircle(float radius);

int main(int argc, char* argv[])
{
  int SIZE = 200;
  char input[SIZE];
  float radstart;
  float radend;


while (1)
{
  printf("Enter start value:\n");
  fgets(input, SIZE, stdin);
  if(sscanf(input, "%f", &radstart) == 1) break;
    printf("That's not a real number.\n");
}

while (1)
{
 printf("Enter end value:\n");
  fgets(input, SIZE, stdin);
  if (sscanf(input, "%f", &radend) ==1) break;
    printf("That's not a real number.\n");
}

  for (float i = radstart; i <= radend; i++)
  {
    printf("Radius = %f...", i);
   printf("Area = %f\n",areaofcircle(i));
  }
}

float areaofcircle(float radius)
{
    float area = 3.14*radius*radius;
    return area;
}
