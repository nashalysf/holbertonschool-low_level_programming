#include "main.h"
/**
 * factorial- Entry point
 * @n: given num param
 * Description: returns a factorial
 * of given number
 * Return: 0. (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
