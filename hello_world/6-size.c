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

		printf("Size of a char: %lu.\n",(unsigned long)sizeof(c),"byte(s)");
		printf("Size of an int: %lu\n",(unsigned long)sizeof(i), "bytes(s)");
		printf("Size of a long: %lu\n",(unsigned long)sizeof(l),"bytes(s)");
		printf("Size of a long long: %lu\n",(unsigned long)sizeof(ll),"bytes(s)");
		printf("Size of a float: %lu\n",(unsigned long)sizeof(f),"bytes(s)");

		return(0);
	}
