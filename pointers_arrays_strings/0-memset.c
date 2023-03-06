#include "main.h"
/**
 * _memset- Entry point
 * @n: size of memory
 * @s: address of memory
 * @b: constant byte
 * Description: fills memory with
 * constant byte
 * Return: char pointer to memory
 * area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
