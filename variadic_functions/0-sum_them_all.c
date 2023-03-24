#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all- entry point
 * @n: number of parameters
 * Description: sums all params
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	var args_num;

	va_start(args_num, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = va_arg(args_num, unsigned int);

	va_end(args_num);
	return (sum);

}
