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
char string[15] = str;
for (i = 0; i < 15; i++)
{
	_putchar(string[i]);
}
}
