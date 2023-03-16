#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - entry point
 * @s1: string param 1.
 * @s2: string param 2.
 * Description: concantenates two strings
 * Return: new string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);
	int mem = lens1 + lens2 + 1;
	int i, x;

	char *s = (char *)malloc(sizeof(char) * mem);

	for (i = 0; i < lens1; i++)
		s[i] = s1[i];
	for (x = 0; x < lens2; x++)
		s[lens1 + i] = s2[i];
	s[mem - 1] = '\0';
	return (s);
}
