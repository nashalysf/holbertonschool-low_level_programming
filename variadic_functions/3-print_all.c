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
	char c;
	int i;
	float f;
	char *s;
	int x = 0;

	var ptr;;
	va_start(ptr, format);

	while (format && format[x] != '\0')
	{
		switch (format[x++])
		{
			case 'c':
				c = (char) va_arg(ptr, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ptr, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(ptr, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ptr, char*);
				if (s == NULL)
					s = ("(nil)");
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[x] != '\0')
			printf(", ");
	}
	va_end(ptr);
	printf("\n");
}
