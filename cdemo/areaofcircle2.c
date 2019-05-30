#include <stdio.h>
#include <stdlib.h>
float areaofcircle(float radius);

int main(int ctinput, char* inputstring[2])
{
  int SIZE = 200;
  char input[SIZE];
  float radstart;
  float radend;
  int noinput = 1;
  
if (noinput < ctinput)
 {
   while (1)
   {
     if(sscanf(inputstring[1], "%f", &radstart) == 1) break;
     printf("That's not a real number, try executing again.\n");
     exit(0);
   }
   while (1)
   {
     if(sscanf(inputstring[2], "%f", &radend) == 1) break;
     printf("That's not a real number, try executing again.\n");
     exit(0);
   }
 }
if (noinput == ctinput)
 {
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
   if (sscanf(input, "%f", &radend) == 1) break;
   printf("That's not a real number.\n");
   }
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
