#include "main.h"
/**
*_puts- Entry point
*@str: string being printed
*Description: prints a string
*Return: 0. (Success)
*/
void _puts(char *str)
{
	int i;

for (i = str[i]; i >= 1; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
