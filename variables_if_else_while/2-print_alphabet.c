#include <stdio.h>
/**
*main - Entry point
*
*Description: for every letter in lowercase,
*print and go to next.
*Return: Always 0. (Success)
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);

	}
	putchar ('\n');
	return (0);
}
