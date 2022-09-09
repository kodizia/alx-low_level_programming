#include <stdio.h>
#include <stdlib.h>

/**
 * main - program the print both upper and lower case
 *
 * Return: 0 if success
 */
int main(void)
{
int ch;
int ch1;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar (ch);
}
for (ch1 = 'A'; ch <= 'Z'; ch++)
{
putchar (ch1);
}
putchar ('\n');
return (0);
}