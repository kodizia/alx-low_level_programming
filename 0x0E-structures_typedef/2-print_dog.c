#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function to print a struct dog
 *
 * @d: a pointer to the struct
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
printf("Age: %6.f\n", d->age);
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}
}
