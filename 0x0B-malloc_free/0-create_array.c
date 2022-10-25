#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function to create an array of character
 * @size: size of the array
 * @arr: character array
 *
 * Return: pointer to the array or null if malloc fails to allocate
 *
 *
 */

char *create_array(unsigned int size, char arr)
{
	char *array_alloc = malloc(size * sizeof(char));
	unsigned int n;

	if (size == 0 || array_alloc == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		array_alloc[n] = arr;

	return (array_alloc);
}
