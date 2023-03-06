#include "main.h"
/**
*string_toupper- Entry point
*@str: string param
*Description: changes all lowercase
*to uppercase by substracting from
*ascii table
*Return: -32. char
*/
char *string_toupper(char *str)
{
char *s = str;

while (*s)
{
	if (*s >= 'a' && *s <= 'z')
		*s -= 32;

	s++;
}
return (s);
}
