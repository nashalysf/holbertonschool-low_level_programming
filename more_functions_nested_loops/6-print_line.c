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

if (n > 0)
{
for (; n <= 50; n++)
{
_putchar('_');
}
}
_putchar('\n');
}
