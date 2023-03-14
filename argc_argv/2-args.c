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
	int i = 0;
if (argc > 0)
	for (; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
