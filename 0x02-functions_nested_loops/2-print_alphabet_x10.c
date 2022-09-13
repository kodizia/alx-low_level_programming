#include "main.h"
/**
 *print_alphabet_x10 - funtion to print 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
int ch = 0;
while (ch < 10)
{
int i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
ch++;
}
}
