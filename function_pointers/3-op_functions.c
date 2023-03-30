#include "3-calc.h"
/**
 * op_add - sum ints
 * @a: num1
 * @b: num2
 * Return: result int
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - substract ints
 * @a: num1
 * @b: num2
 * Return: result int
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply ints
 * @a: num1
 * @b: num2
 * Return: result int
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divide ints
 * @a: num1
 * @b: num2
 * Return: result int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}

/**
 * op_mod - divide ints
 * @a: num1
 * @b: num2
 * Return: reminder int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
