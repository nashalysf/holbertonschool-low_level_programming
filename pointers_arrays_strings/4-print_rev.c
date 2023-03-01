#include "main.h"
#include <string.h>
/**
*- Entry point
*
*Description: 
*Return: 0. (Success)
*/
void print_rev(char *s)
{
int i = 0;
while(s[i] != '\0')
{
s++;
_putchar(s--);
}
_putchar(\n');
}

