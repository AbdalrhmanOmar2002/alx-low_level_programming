#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
 */

int _strlen(const char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}

/**
 * _strcopy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 *
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];

dest[i] = '\0';

return (dest);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: Nothing.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
/* if name and owner are empty and age is less than zero return null */

if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *)malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);

return (dog);
}
