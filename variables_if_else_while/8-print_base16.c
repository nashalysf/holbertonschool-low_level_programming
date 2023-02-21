#include <stdio.h>
/**
*main - Entry point
*
*Description: checks the value of the condition,
*and prints single digits of base 16. in binary
*Return: Always 0. (Success)
*/

int main(void)
{
	int x;

	char y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
