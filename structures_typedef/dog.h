#ifndef _DOG_
#define _DOG_
/**
 * struct dog - structure / obj prototype
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 */
struct dog
{
char *name;
float age;
char *owner;
};
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);

/**void print_dog(struct dog *d);

*dog_t *new_dog(char *name, float age, char *owner);

*void free_dog(dog_t *d);
*/
