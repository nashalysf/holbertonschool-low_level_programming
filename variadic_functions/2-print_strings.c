#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings- prints string
 * @separator: string in between
 * @n: number of ints passed
 * Return: numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	var ap;
	char *string;
	unsigned int i = 0;

	va_start(ap, n);

	for (; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (string == NULL)
			printf("(nil)");

		printf("%s", string);
		if (separator == NULL)
			continue;
		else (i < n - 1)
			printf("%s", separator);
		}

		printf("\n");
		va_end(ap);
}
