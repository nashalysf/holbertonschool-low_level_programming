#include <string.h>
#include "main.h"
/**
*rev_string- Entry point
*@s: string param
*Description: function to reverse
*a string
*Return: 0. (Success)
*/
void rev_string(char *s)
{
int i = 0;

int x = 0;

while (s[i] != '\0')
	i++;
while (x < i--)
{
	char y = s[i];

	_putchar(y--);
}
}
