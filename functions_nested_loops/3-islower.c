#include "main.h"
/**
*print_alphabet - Entry point
*
*Description: print alphabet in lowercase.
*Return: Void (Success)
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
