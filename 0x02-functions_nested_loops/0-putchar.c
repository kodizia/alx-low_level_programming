#include "main.h"
/**
 *main- function that prints putchar
 *
 *Return: 0
 */
int main(void)
{
char var[] = "_putchar";
int p;
int lenCh = sizeof(var) / sizeof(var[0]);
for (p = 0; p < lenCh - 1; p++)
{
_putchar(var[p]);
}
_putchar('\n');
return (0);
}
