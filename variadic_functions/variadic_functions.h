#ifndef _VAR_FUNC_
#define _VAR_FUNC_

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

#include <stdarg.h>
typedef va_list var;

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
#endif
