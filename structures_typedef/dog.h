#ifndef _DOG_
#define _DOG_
/**
 * struct dog - structure / obj constructor
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
* struct dog - init a var
* @name: dogs name
* @age: dogs age
* @owner: owners name
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints dog struct
 * @d: pointer to dog structure
 */
void print_dog(struct dog *d);

/**
 * dog_t: new name od struct dog
 */
typedef struct dog dog_t;

/**
 * new_dog - creates new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees dog struct
 * @d: structure pointer
 */
void free_dog(dog_t *d);
#endif
