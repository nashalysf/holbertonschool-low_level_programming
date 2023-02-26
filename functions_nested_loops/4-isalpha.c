#include "main.h"
/**
*_isalpha - Entry point
*@c: input param
*Description: .
*Return: (Success)
*/
int _isalpha(int c)
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
