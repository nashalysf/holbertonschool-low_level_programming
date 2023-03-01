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
	int i = 0;
while (str[i] != '\0')
{
	_putchar(str[i]);
}
_putchar('\n');
}
