#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: string param
 * Description: returns a pointer to a new allocated
 * space in memory that contains a copy of the param
 * Return: pointer.
 */
char *_strdup(char *str)
{
char *s;
int i = 0;
int len = 0;

s = malloc((len + 1) * sizeof(char));

if (*str == 1)
	return ('\0');
for (; len > s[i]; len++)
{
while (i < len)
{
s[i] = str[i];
i++;
}
s[i] = '\0';
}
return (s);
}
