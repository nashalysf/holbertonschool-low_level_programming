#include <stdlib.h>
#include <stdio.h>
#ifndef FILENAME
#define FILENAME __FILE__
#endif
/**
 * main - entry point
 * Description: prints name of source file
 * Return: void
 */
int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
