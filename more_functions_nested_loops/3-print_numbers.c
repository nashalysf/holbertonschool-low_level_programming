#include "main.h"
/**
*print_numbers- Entry point
*
*Description: prints num 0. to 9.
*Return: (Success)
*/
void print_numbers(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
	_putchar(x);
}
_putchar('\n');
return;
}
