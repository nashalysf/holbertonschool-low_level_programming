#include "main.h"
/**
*_strspn- Entry point
*@s: bytes from accept
*@accept: initial segment
*Description: gets length of substring
*Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int torf;
	char *initial = accept;

	while (*s)
	{
		torf = 0;
	while (*accept)
	{
		if (*accept == *s)
		{
			i++;
			torf = 1;
			break;
		}
		accept++;
	}
	s++;
	accept = initial;
	if (torf == 0)
	break;
	}

	return (i);
}
