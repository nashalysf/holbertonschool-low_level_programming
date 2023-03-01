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
	int i;
	size_t l = strlen(str);
for (i = 0; i < l; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
