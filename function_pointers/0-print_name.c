#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 *print_name - prints a name
 *@name: name to be printed
 *@f: function pointer
 *Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
