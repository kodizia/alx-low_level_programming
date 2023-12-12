#include "main.h"
#define NULL 0
/**
 * _strchr - function that locates a char in string
 * @s: string to be searched
 * @c: the charcater to be located
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
int  i = 0;

while (s[i] != '\0' && s[i] != c)
i++;
if (s[i] == c)
return (&s[i]);
else
return (NULL);
}
