#include <string.h>
#include "main.h"
/**
 * reverse_array- a function that reverses the strings in an array
 * @a: pointer to array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
int *tmp = (int *) malloc(sizeof(int));
int j;
int k;
for (j = 0; j < n; j++)
tmp[j] = a[j];
for (j = n - 1, k = 0 ; j >= 0; k--, j++)
a[k] = tmp[j];
}
