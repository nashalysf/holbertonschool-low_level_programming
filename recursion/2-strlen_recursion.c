#include "main.h"
/**
 * _strlen_recursion- Entry point
 * @s: string param
 * Description: return length of string
 * Return: length
 */
int _strlen_recursion(char *s)
{
int i = 0;

if (*s)
{
	i = s[i];
}
return (i);
}
