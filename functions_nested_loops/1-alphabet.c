#include "main.h"

/**
*print_alphabet - Entry point
*
*Description: print alphabet in lowercase.
*Return: Void (Success)
*/
void print_alphabet(void)
{
char x = 'a';

while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
return;
}
