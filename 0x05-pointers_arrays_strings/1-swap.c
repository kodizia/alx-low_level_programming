#include "main.h"
/**
 * swap_int - function that swaps two integers
 *@a:pointer to the fist variable
 *@b:pointer to the second variable
 *
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
