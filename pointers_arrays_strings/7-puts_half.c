#include <string.h>
#include "main.h"
/**
*puts_half- Entry point
*@str: string param
*Description: prints the second half
*of the string
*Return: 0. (Success)
*/
void puts_half(char *str)
{
int x = 0;
int i = 0;
int d;

while (str[x] != '\0')
	x++;
if (x % 2 == 0)
	d = x / 2;
if (x % 2 == 1)
	d = (x + 1) / 2;
for (; i < x; i++)
	_putchar(str[i]);
_putchar('\n');
}
