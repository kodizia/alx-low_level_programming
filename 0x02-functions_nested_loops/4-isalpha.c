#include "main.h"
/**
 *_isalpha- check for alphabetic character
 * @c - character to be checked
 * Return:1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
int lower = (c >= 'a' && c<= 'z');
int upper = (c >= 'A' && c <= 'Z');
if(lower || upper)
return (1);
else
return (0);
}
