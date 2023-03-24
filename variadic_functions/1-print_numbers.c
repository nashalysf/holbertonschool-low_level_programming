#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers- prints numbers
 * @separator: string between numbers
 * @n: number of ints passed
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	var ap;
	unsigned num = 0;
	unsigned i = 0;

	va_start(ap, n);

	for (; i < n; i++)
	{
		if (separator != NULL)
		{
		num = va_arg(ap, int);
		printf("%d", num);
		
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(ap);
}
