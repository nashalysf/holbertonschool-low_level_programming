#include "main.h"
/**
*_strchr- Entry point
*@s: string param
*@c: character param
*Description: locates a char or
*null in a string
*Return: char
*/
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0';)
{
	if (c == s[i])
		return (s);
	i++;
}
	if (c == s[i])
		return (s);

return ('\0');
}
