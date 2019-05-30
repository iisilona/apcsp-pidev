#include <stdio.h>
#include <string.h>

int main()
{
char alpha1[] = "abcdefghijklmnopqrstuvwxyz";
char alpha2[27];
char alpha3[54];
char igletter = 'a';
char upiglet = 'a';

for (int letter = 1; letter <= 26; letter++)
 {
   alpha2[letter] = igletter;
   igletter = igletter + 1;
 }

if(strcmp(alpha1, alpha2)==0)
  {
   printf("String A and String B are the same\n");
  }
else 
 {
   printf("String A and String B are different\n");
 }

for(int index = 1; index <= 26; index++)
 {
   alpha2[index] = upiglet - 32;
   upiglet = upiglet + 1;
 }

if(strcmp(alpha1, alpha2)==0)
  {
   printf("String A and String B are the same\n");
  }
  
else 
 {
   printf("String A and String B are different\n");
 }

strcpy(alpha3, alpha1);
strcat(alpha3, alpha2);
printf("String A: %s\nString B: %s\nString C: %s\n", alpha1, alpha2, alpha3);
}
