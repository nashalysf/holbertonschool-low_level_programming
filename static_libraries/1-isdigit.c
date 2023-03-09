#include "main.h"
/**
*_isdigit- Entry point
*@c: input param
*Description: checks for a digit.
*Return: 0. (Success)
*/
int _isdigit(int c)
{
char x;
	for (x = '0'; x <= '9'; x++)
	{
	if (x == c)
	{
		return (1);
	}
	}
	return (0);
}
