#include <stdio.h>
/**
 * main - program that prints hex numbers
 *Return: 0 if succesful
 */
int main(void)
{
int var;
int var1;
for (var = 0; var < 10; var++)
putchar((var % 10) + '0');
for (var1 = 'a'; var1 <='f'; var1++)
putchar(var1);
putchar('\n');
return (0);
}
