#include "main.h"
/**
*_isalpha - Entry point
*@c: input param
*Description: .
*Return: (Success)
*/
int _isalpha(int c)
{
char x, y;
for (x = 'a'; x <= 'z'; x++)
{
for (y = 'A'; y <= 'Z'; y++)
{
if (y == c || x == c)
{
return (1);
	}
}
}
return (0);
}
