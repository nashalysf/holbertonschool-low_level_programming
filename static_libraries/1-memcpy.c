#include "main.h"
/**
*_memcpy- Entry point
*@dest: new memory area
*@src: memory area
*@n: size byte
*Description: copies memory area
*Return: char of new memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
