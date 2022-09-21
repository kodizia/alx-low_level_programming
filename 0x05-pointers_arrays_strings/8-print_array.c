#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the items in an array
 * @a: array to be printed
 * @n: number of element to print
 *
 */

void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j < n - 1)
printf(",");
}
putchar('\n');
}
