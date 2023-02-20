#include <stdio.h>
/*
 * main - entry point
 *
 * return: zero for success
 */

	int main(void)
	{
		char c;
		int i;
		int l;
		int ll;
		int f;

		printf("Size of a char: %lu bytes(s)\n",(unsigned long)sizeof(c));
		printf("Size of an int: %lu bytes(s)\n",(unsigned long)sizeof(i));
		printf("Size of a long: %lu byes(s)\n",(unsigned long)sizeof(l));
		printf("Size of a long long: %lu byres(s)\n",(unsigned long)sizeof(ll));
		printf("Size of a float: %lu byress(s)\n",(unsigned long)sizeof(f));

		return(0);
	}
