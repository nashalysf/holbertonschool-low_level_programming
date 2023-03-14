#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- entry point
 * @argc: arg count
 * @argv: arg array
 * Description: prints number of args
 * Return: int
 */
int main(int argc, char *argv[])
{
if (argv[0])
	printf("%d\n", argc - 1);
return (0);
}
