#include "main.h"
/**
*_strncat- copies strings.
* @dest: string param
* @src: string param
* @n: number of bytes
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;

while (i < 0)
{
if (i < n && src[i] !='\0')
{
	dest[i] = src[i];
	i++;

	if (dest[i] == '\0')
		break;
}
}
return (dest);
}
