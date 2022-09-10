#include <stdio.h>
/**
 *main - program that print alphabet in the reverse order
 *Return: 0 if succesful
 */
int main(void)
{
int var;
for (var = 'z'; var >= 'a'; var--)
{
putchar(var);
}
putchar('\n');
return (0);
}
