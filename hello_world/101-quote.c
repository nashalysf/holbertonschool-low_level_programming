#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Description: prints string.
*Return: 1. (Success)
*/

int main(void)
{
	int i = 0;
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (quote[i])
	{
		putchar(quote[i]);
		i++;
}
	return (1);
}
