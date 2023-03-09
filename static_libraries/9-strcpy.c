#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_strcpy- Entry point
*@dest: param that'll hold
*string copy
*@src: string param to copy
*Description: copies src string
*into dest
*Return: 0. (Success)
*/
char *_strcpy(char *dest, char *src)
{
	 int i = 0;

	while (i >= 0)
	{
	*(dest + i) = *(src + i);
	if (*(src + i) == '\0')
	{
		break;
	}
		i++;
	}
	return (dest);
}
