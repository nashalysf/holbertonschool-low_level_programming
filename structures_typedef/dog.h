#ifndef _DOG_
#define _DOG_
/**
 * struct dog - entry point
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 * Description: structure /obj prototype
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
* struct dog - entry point
* @name: dogs name
* @age: dogs age
* @owner: owners name
* Description: initializes a var
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - entry point
 * @d: pointer to dog structure
 * Description: prints dog struct
 */
void print_dog(struct dog *d);

#define dog_t struct dog

/**
 * new_dog - entry point
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Description: creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - entry point
 * @dog_t: macro for struct dog
 * @d: structure pointer
 * Description: frees dog structure
 */
void free_dog(dog_t *d);
#endif
