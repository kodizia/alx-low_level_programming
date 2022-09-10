#include <stdio.h>
/**
 * main - program that prints all single base 10 digit
 * Return: 0 if succesful
 */
int main(void)
{
int ch;
for (ch = 0; ch < 10; ch++)
putchar((ch % 10) + '0');
putchar('\n');

return (0);
}
