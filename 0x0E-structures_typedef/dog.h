#ifndef _DOG_H
#define _DOG_H

/**
 *struct dog - information about dogs
 *@name: name of dog
 *@age: age of the dog
 *@owner: who owns the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t- typedef for struct dog
 */
typedef struct dog dog_t;
int _putchar(char);
void init_dog(struct  dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
