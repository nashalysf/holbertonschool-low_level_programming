#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all -  prints anyting
 * @format: list of type of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *ptr;
	int i = 0;

	va_start(ap, format);

	if (format == NULL)
		return;

	for (; i < format[i]; i++)
	{
		if (i == 'c')
		{
			char c = (char) va_arg(ap, int);
			printf("%c", c);
		}
		if (i == 'i')
		{
			char i = va_arg(ap, int);

			printf("%d", i);
		}
		if (i == 'f')
		{
			float f = (float) va_arg(ap, int);

			printf("%f", f);
		}
		if (i == 's')
		{
			ptr = va_arg(ap, char *);

			if (ptr == NULL)
				printf("(nil)");
			else
				printf("%s", ptr);
		}
	}
	va_end(ap);
	printf("\n");
}
