#include "main.h"
/**
*cap_string- Entry point
*@str: string param
*Description: capitalize letters
*from string
*Return: -32. char
*/
char *cap_string(char *str)
{
char *s = str;

while (*s <= 'z')
{
	if (*s >= 'a')
		*s -= 32;
	s++;
}
return (s);
}

