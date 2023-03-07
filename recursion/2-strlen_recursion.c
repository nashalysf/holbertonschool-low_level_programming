#include "main.h"
/**
 * _strlen_recursion- Entry point
 * @s: string param
 * Description: return length of string
 * Return: length
 */
int _strlen_recursion(char *s)
{
if (*s)
{
	return (1 + _strlen_recursion(s + 1));
}
return (0);
}
