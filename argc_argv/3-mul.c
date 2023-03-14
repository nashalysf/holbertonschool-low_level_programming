#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- entry point
 * @argc: arg count
 * @argv: arg array
 * Description: multiplies args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}
if (argc > 1)
{
	for (i = 1; i < argc; i++)
{
	mul *= atoi(argv[i]);
}
	printf("%d\n", mul);
}
return (0);
}

