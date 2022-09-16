#include "main.h"
#include <ctype.h>
/**
 * print_numbers - unction that prints the numbers
 */
void print_numbers(void)
{
int i = 0;
do {
_putchar(i + '0');
i++;
} while (i < 10);
_putchar('\n');
}
