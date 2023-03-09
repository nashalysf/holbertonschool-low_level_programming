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
	
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(2, quote, 59);
	return (1);
}
