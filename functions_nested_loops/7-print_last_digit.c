#include "main.h"
/**
*print_last_digit- Entry point
*@r: input param.
*Description: prints last digit of a number.
*Return: (Success)
*/
int print_last_digit(int r)
{
int x;
if (r < 0)
{
x = -1 * (r % 10);
}
else
{
x = r % 10;
}
return (x % 10);
}
