#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog struct
 * @name: First member
 * @owner: Second member
 * @age: Third member
 *
 * Description: just a lone dog struct in a big kitty world
 */

typedef struct dog
{
char *name;
char *owner;
float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
