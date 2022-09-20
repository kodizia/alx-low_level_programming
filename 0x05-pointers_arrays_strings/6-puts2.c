#include "main.h"
#include <string.h>
/**
 *puts2-  function that prints every other character of a string
 *@s: string to be printed
 */
void puts2(char *s)
{
int i = 0;
while (i != '\0')
{
if (i % 2 == 0)
_putchar(s[i]);
i += 1;
}
_putchar('\n');
}
