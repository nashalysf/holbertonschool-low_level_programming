#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- entry point
 * @argc: arg count
 * @argv: arg array
 * Description: prints programs name and new line
 * Return: programs name
 */
int main(int argc, char *argv[])
{
if (argc > 0)
	printf("%s\n", argv[0]);
return (0);
}
