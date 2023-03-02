#include <string.h>
#include "main.h"
/**
*puts2- Entry point
*@str: string param
*Description: 
*Return: 0. (Success)
*/
void puts2(char *str)
{
	int i = 0;
	for (; str[i] < 9;)
	{
		_putchar(str[i]);
		i += 2;
	}
}
