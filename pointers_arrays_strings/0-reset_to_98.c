#include "main.h"
/**
*reset_to_98- Entry point
*@n: pointer param
*Description: takes pointer to an
*int as param and updates value
*Return: 0. (Success)
*/
void reset_to_98(int *n)
{
int *ptr;
ptr = &n;
*ptr = 98;
_putchar(*ptr);
}
