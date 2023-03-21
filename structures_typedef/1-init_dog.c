#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - entry point
 * @d: address of struct
 * @name: dogs name
 * @age: dogs name
 * @owner: owners name
 * Description: inits a var of type struct dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
