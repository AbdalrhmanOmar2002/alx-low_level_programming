#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: the dog struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
