#include "main.h"
#include <string.h>
/**
 *rev_string - function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int i = strlen(s) - 1;
int k = 0;
char tmp;
while (i > k)
{
tmp = s[i];
s[i] = s[k];
s[k] = tmp;
i--;
k++;
}
}
