#include "main.h"
/**
*print_line- Entry point
*@n: number of times the char prints
*Description: print underscore
*n times
*Return: void (Success)
*/
void print_line(int n)
{
int x = n;
if (n > 0)
{
for (; n == x; n++)
{
_putchar('_');
}
}
_putchar('\n');
}
