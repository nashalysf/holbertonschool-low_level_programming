#include "main.h"
/**
*_strstr- Entry point
*@haystack: string param
*@needle: char param
*Description: locates substring
*Return: pointer to the substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle;
	char *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return ('\0');
}
