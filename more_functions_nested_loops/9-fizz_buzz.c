#include <stdio.h>
/**
*main- Entry point
*
*Description: prints 1. to 100.
*Return: 0. (Success)
*/
int main(void)
{
int x;

for (x = 1; x < 101; x++)
{
	if ((x % 15) == 0 && x != 1)
		printf("FizzBuzz");

	else if ((x % 5) == 0)
		printf("Buzz");

	else if ((x % 3) == 0)
		printf("Fizz");

	else
	printf("%d", x);
if (x != 100)
printf(" ");
}
putchar('\n');
return (0);
}
