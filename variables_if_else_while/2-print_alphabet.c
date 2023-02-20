#include <stdio.h>

/* main - Entry point */

int main(void)
{
	char x = 'a';

	while( x <= 'z'){
		putchar(x);
		x++;
		putchar("\n");
	}
	return(0);
}
