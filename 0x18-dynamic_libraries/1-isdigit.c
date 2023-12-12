#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if a var is digit
 * @c: variable to be checked
 *
 * Created by: Asiwaju
 * cc: 16th september 2022
 *
 * Return: 1 if var is digit, else 0
 */
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
