#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_times_table - prints n times
 * @n: table dimensions
 * Return: 0. Success
 */
void print_times_table(int n)
{
	int i, x;

	if (n < 15 || n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (x = 0; x <= n; x++)
			printf("%d\n", i * x);
	}
	}
}
