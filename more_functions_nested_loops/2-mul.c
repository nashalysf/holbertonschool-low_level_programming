#include "main.h"
#include "_putchar.c"
/**
*mul- Entry point
*@a: first int param
*@b: second int param
*Description: multiplies two int
*Return: 0. (Success)
*/
int mul(int a, int b)
{
int x;
x = a * b;
_putchar(x + '0');
return (0);
}
