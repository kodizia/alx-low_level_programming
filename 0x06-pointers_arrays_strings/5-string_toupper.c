#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_toupper - function to convert string to upper case
 * @str: pointer to string to be converted
 *
 * Return: pointer to converted string
 */
char *string_toupper(char *str)
{
int j;
for (j = 0; str[j] != '\0'; j++)
{
if (str[j] >= 'a' && str[j] <= 'z')
str[j] = str[j] - 32;
}
return (str);
}
