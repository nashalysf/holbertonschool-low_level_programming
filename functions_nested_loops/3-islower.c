#include "main.h"
/**
*_islower - Entry point
*@c: input parameter.
*Description: checks for lowercase.
*Return: 0. (Success)
*/
int _islower(int c)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
if (x == c)
{
	return (1);
}
}

return (0);
}
