#include "main.h"
#include <string.h>
/**
*print_rev- Entry point
*@s: pointer param
*Description: print string in reverse
*Return: 0. (Success)
*/
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;

while (s[i] != '\0')
{
	i--;
	_putchar(s[i]);
}
_putchar('\n');
}

