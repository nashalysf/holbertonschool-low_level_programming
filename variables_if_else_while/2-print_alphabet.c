#include <stdio.h>
/*
*main -Entry point
*@for: x starting at a will increase until reached z
*Return: Always 0.Success
*/
int main(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);

	}
	putchar ('\n');
	return (0);
}
