#include <stdio.h>
/**
*main - Entry point
*
*Description: checks the value of the condition,
*and executes controllers with space and comma
*Return: Always 0. (Success)
*/

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
