#include "main.h"
/**
 *print_last_digit - function that print last digit
 *@var: variable integer
 *Return: 0
 */
int print_last_digit(int var)
{
int result;
if (var < 0)
result = -1 * (var % 10);
else
result = var % 10;

_putchar ((result) +'0');

return (result);
}
