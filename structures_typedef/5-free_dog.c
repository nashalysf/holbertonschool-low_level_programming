#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dogs- free struct memory
 * @d: memory to be freed
 * Return: freed memory
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
