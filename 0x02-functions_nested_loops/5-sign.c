#include "main.h"
/**
 *print_sign - print sign on a number
 * @n: integer to be checked
 * Return:1 if postive else 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
_putchar('0');
return (0);
}
