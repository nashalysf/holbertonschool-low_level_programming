#include "main.h"
/**
 * leet - Entry point
 * @l: the string to be converted into leet speak
 *
 * Description: converts sting into leet
 * Return: char
 */
char *leet(char *l)
{
	int i = 0;
	int x = 0;
	char *c = "aAeEoOlLtT";
	char *n = "4433001177";

	while (*(l + i) != '\0')
	{
		while (*(c + x) != '\0')
		{
			if (*(l + i) == *(c + x))
			{
				*(l + i) = *(n + x);
			}
		x++;
		}
			x = 0;
			i++;
	}
	return (l);
}
