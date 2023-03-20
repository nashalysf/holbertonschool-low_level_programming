#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - entry point
 *@s1: string one
 *@s2: string two
 *@n: size param
 *Description: concant 2. strings
 *Return: pointer with newly allocated mem
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns;
	unsigned int i = 0;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[lens1])
		lens1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		n = lens2;

	ns = malloc(lens1 + n + 1);
	if (ns == NULL)
		return (NULL);

	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
			ns[i] = *s1, s1++;
		else
			ns[i] = *s2, s2++;
	}
	ns[i] = '\0';
	return (ns);
}
