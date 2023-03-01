#include "main.h"
#include <string.h>
/**
*_puts- Entry point
*@str: string being printed
*Description: prints a string
*Return: 0. (Success)
*/
void _puts(char *str)
{
	size_t x = strlen(str);

for (; x >= 1; x++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
