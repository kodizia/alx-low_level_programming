#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that print alphabet in the reverse order
 *Return: 0 if succesful
 */
int main(void)
{
char var;
for (var = 'z'; var >= 'a'; var--)
{
putchar(var);
}
putchar('\n');
return (0);
}
