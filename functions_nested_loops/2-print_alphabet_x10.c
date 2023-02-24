#include "main.h"

/**
*print_alphabet_x10 - Entry point
*
*Description: print the alphabet 10. times
*Return: Void (Success)
*/
void print_alphabet_x10(void)
{
int y;
for (y = 1; y < 10; y++)
{
char x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
}
_putchar('\n');
return;
}
