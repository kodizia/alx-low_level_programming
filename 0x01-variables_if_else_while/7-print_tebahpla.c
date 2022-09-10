#include <stdio.h>
/**
 *main - program that print alphabet in the reverse order
 *Return: 0 if succesful
 */
int main(void)
{
int var;
int var1 = 'z';
var = 'a';
while (var <= var1)
{
var1--;
putchar(var);
}

putchar('\n');
return (0);
}
