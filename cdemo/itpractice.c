#include <stdio.h>
int main()

{
	int div;
	printf("Input a number between 1 and 100 here: ");
	scanf("%d, &div");
	for (int i = 0; i <= 100; i++)
	{
	if ( i%div == 0 )
		{
		printf("%d\n", i);
		}
	}
}
