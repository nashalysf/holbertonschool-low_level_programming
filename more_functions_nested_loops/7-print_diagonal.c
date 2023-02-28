#include "main.h"
/**
*print_diagonal- Entry point
*@n: number of times char prints
*Description:
*Return: 0. (Success)
*/
void print_diagonal(int n)
{
int x = 0;
if (n > 0)
{
for (; x < n; x++)
{
_putchar('\\');
_putchar('\n');
_putchar(' ');
}
}
_putchar('\n');
}
