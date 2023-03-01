#include "main.h"
#include <string.h>
/**
*_strlen- Entry point
*@s: pointer param
*Description: returns length of string
*Return: 0. (Success)
*/
int _strlen(char *s)
{
size_t x = strlen(s);

_putchar(x + '0');
return (0);
}
