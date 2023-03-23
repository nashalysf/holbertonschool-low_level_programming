#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 *print_name - calls func that prints name
 *@name: name to be printed
 *@f: function pointer
 *Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return (NULL);
	f(name);
}
