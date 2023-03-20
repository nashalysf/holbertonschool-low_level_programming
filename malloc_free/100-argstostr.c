#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - entry point
 * @ac: array count param
 * @av: array vector param
 * Description: concatenates args
 * Return: pointer with new address
 */
char *argstostr(int ac, char **av)
{
	int i, x;
	int  s = 0;
	int len = 0;
	char *ptr;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		len++;
	len++;
	}

		len++;
		ptr = malloc(sizeof(char) * len);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			ptr[s] = av[i][x];
			s++;
		}
	ptr[s] = '\n';
	s++;
	}

		ptr[s] = '\0';
		return (ptr);
}
