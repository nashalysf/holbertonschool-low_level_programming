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
	int i = 0;
	int num = 0;
	int morp = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			morp *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (num >= 0)
		{
			num = (num * 10) - (s[i] - '0');
			i++;
		}
		else
		{
			num = (num * 10) - (s[i] - '0');
			i++;
		}
	}
	morp *= -1;
	return (num * morp);
}
