#include "main.h"
/**
 *print_rev- function that prints a string, in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int i;
int len = strlen(s);
for (i = len - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
