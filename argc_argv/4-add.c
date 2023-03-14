#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- entry point
 * @argc: arg count
 * @argv: arg array
 * Description: adds positive nums
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, x, y;
	
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		x = atoi(argv[i]);
	
	for (y = 0; argv[i][y] != '\0'; x++)
	{
	
		if (argv[i][y] < '0' || argv[i][y] > '9')
		{
			printf("Error\n");
			return (1);
		}
	if (x <=0)
	{
			printf("Error\n");
			return (1);
	}
		sum += x;
	}
	printf("%d\n", x);
	}
return (0);
}
