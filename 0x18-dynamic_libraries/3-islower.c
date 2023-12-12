#include "main.h"
/**
 *_islower- function that checks for lower case characters
 *Return: 1 if succesful or 0
 *@c: the character to be checked
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
