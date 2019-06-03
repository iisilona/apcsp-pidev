#include <stdio.h>
#include <string.h>
struct studind
{
 char firstname[50];
 char lastname[50];
 int age;
 int ID;
}studentlist[200];


void printStudent(struct studind *ptr)
{
  printf("Student First Name: %s\n", ptr->firstname);
  printf("Student Last Name: %s\n", ptr->lastname);
  printf("Student Age: %d\n", ptr->age);
  printf("Student ID: %d\n", ptr->ID);
  ptr++;
}


int main()
{
char input[200];

struct studind studentlist[1];
int MAX = 201;
int i;

for(i = 0; i < MAX; i++ )
  {
    printf("Enter a first name:\n");
    fgets(input, 50, stdin);
    sscanf(input,"%s", studentlist[i].firstname);

    printf("Enter a last name:\n");
    fgets(input, 50, stdin);
    sscanf(input,"%s", studentlist[i].lastname);

    while (1)
      {
       printf("Enter an age:\n"); 
        fgets(input, 50, stdin);
       if (sscanf(input, "%d", &studentlist[i].age) == 1) break;
       printf ("Not a valid age, try again.\n");
      }

    while (1)
      {
      printf("Enter an ID number:\n");
      fgets(input, 50, stdin);
      if (sscanf(input, "%d", &studentlist[i].ID) == 1) break;
      printf ("Not a valid number, try again.\n");
      }
   printStudent(studentlist);
  }
}
