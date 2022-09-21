#include <string.h>
#include "main.h"

/**
 * puts_half - print the last half of a string
 * @s: pointer to the string variable s
 *
 */
void puts_half(char *s)
{
int len = strlen(s), p;
if (len % 2 == 0)
{
for (p = len / 2; p < len; p++)
_putchar(s[p]);
}
else
for (p = (len / 2) + 1; p < len; p++)
_putchar(s[p]);
_putchar('\n');
}
