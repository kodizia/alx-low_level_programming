#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints alphabet
 *
 *Return: 0 if success
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
continue;
putchar(ch);
}
putchar('\n');
return (0);
}
