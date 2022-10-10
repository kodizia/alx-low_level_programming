#include "dog.h"
/**
 *init_dog - initializes a struct of type dog
 *
 * @d: is a pointer to the structure dog
 * @name: pointer to the dog's name
 * @age: pointer to the age of the dog
 * @owner: pointer to the owner of the dog
 *
 *Return: void
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
