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
	size_t i = strlen(str);

for (; i >= 1; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
