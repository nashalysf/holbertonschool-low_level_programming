#include "main.h"
/**
*_isupper- Entry point
*@c: input param
*Description: checks for uppercase char
*Return: 0. (Success)
*/
int _isupper(int c)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
	{

	if (x == c)
	{

	return (1);
	}
	}
	return (0);
}

