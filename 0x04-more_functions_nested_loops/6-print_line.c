#include "main.h"

/**
 * print_line - print lines (_) n number of times
 * @n: integer variable
 *
 * Created by: christian joshua
 * cc: 16th september 2022
 */

void print_line(int n)
{
if (n < 1)
_putchar('\n');
else
{
while (n--)
_putchar('_');
_putchar('\n');
}
}
