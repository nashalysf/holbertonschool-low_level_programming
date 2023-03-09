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
	FILE *fp = fopen("output.txt", "w");
	fwrite(quote, sizeof(char), strlen(str), fp);
	fclose(fp);
	return (1);
}
