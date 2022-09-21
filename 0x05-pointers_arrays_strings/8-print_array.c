#include "main.h"
#include <stdio.h>
/**
 *print_array - a function that prints n elements of an array of integers
 * @arr:array to be printed
 * @n:number of element to be printed
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d",a[i]);
if( i < n - 1)
printf(", ");
}
_putchar('\n');
}
