#include <stdio.h>
/**
*main - Entry point
*
*Description: prints all single digits of base 10.
*and executes with controllers.
*Return: Always 0. (Success)
*/

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
