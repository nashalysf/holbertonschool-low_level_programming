#include "main.h"
#include <stdio.h>
/**
*_atoi- Entry point
*@s: string param
*Description: converts a string
*to an integer
*Return: 0. (Success)
*/
int _atoi(char *s)
{
int morp = 1;
int i = 0;

while (*s++)
{
if (*s == '-' && *s == '+')
	morp *= -1;

else if (*s >= '0' && *s <= '9')
	i = (i * 10) + (*s - '0');

else if (i > 0)
	break;
}
	return (i * morp);
}
