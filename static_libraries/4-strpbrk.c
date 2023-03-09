#include "main.h"
/**
* _strpbrk - searches a string for a set of bytes
* @s: string param
* @accept: char param
* Return: pointer to the byte that matches accept
* or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	char *initial = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			return (s);
			accept++;
		}
	accept = initial;
	s++;
	}

	return ('\0');
}

