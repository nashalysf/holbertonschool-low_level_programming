#include <string.h>
#include "main.h"
/**
*_strcat- Entry point
*@src: string param
*@dest: string param
*Description: concatenates two string
*Return: 0. (Success)
*/
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;
	int x = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + x) != '\0')
	{
	if (x < len)
	{
		*(dest + i) = *(src + x);
		i++;
	}
	x++;
	}
	return (dest);
}
