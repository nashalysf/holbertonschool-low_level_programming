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

for (*s = 'a'; *s <= 'z'; s++)
{
	*s -= 32;
}
return (s);
}
