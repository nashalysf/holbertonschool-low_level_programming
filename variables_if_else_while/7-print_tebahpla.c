#include <stdio.h>
/**
*main - Entry point
*
*Description: print the alphabet in reverse,
*starting with z print and regressive till a
*Return: Always 0. (Success)
*/

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{

		putchar (x);

	}
	putchar ('\n');
	return (0);
}
