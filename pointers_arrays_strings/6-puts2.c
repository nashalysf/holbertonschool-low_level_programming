#include <string.h>
#include "main.h"
/**
*puts2- Entry point
*@str: string param
*Description: prints every 2. digits
*Return: 0. (Success)
*/
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0';)
	{
		_putchar(str[i] + 0);
		i += 2;
	}
	_putchar('\n');
}
