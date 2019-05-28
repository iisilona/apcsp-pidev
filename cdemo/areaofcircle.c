#include <stdio.h>
float areaofcircle(float radius);

int main()
{
  for (float i = 3.5; i <= 12.5; i++)
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
