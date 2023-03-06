#include "main.h"
/**
*_strncat- concatenates two strings.
* @dest: pointer param
* @src: pointer param
* @n: number of bytes
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + x) != '\0')
	{
		if (x < n)
		{
			*(dest + i) = *(src + i);
			i++;
		}
		x++;
	}
	return (dest);
}
