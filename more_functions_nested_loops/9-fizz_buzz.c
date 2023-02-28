#include <stdio.h>
/**
*main- Entry point
*
*Description: prints 1. to 100.
*Return: 0. (Success)
*/
int main()
{
int x;

for (x = 1; x < 101; x++)
{
	if ((x % 15) == 0 && x != 1)
		printf("FizzBuzz ");
	
	else if ((x % 10) == 5)
                printf("Buzz ");
		

	else if ((x % 10) == 3)
		printf("Fizz ");

	else
	printf("%d ", x);
}
putchar('\n');
return (0);
}
