#include "main.h"
/**
 * prime_num- Entry point
 * @n: number param
 * @i: traverser param
 * Description: checks if int is prime
 * Return: 0. or 1.
 */
int prime_num(int n, int i)
{
if (n == i)
	return (1);
if (n % i == 0)
	return (0);
return (prime_num(n, i + 1));
}
/**
 * is_prime_number- Entry point
 * @n: number param
 * Description: returns 1. if int is prime
 * number otherwise return 0.
 * Return: 0. or 1.
 */
int is_prime_number(int n)
{
if (n <= 1)
	return (1);
if (n == 0)
	return (0);
else
	return (prime_num(n, 2));
}
