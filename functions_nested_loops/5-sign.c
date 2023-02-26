#include "main.h"
/**
*print_sign - Entry point
*@n: input param
*Description: checks if number is positive,
*zero or negative
*Return: 0.(Success)
*/
int print_sign(int n){
char x;
if (n >= 1)
{
x = '+';
_putchar(x);
}
else if (n == 0)
{
x = '0';
_putchar(x);
}
else if (n < 0)
{
x = '-';
_putchar(x);
}
return (0);
}
