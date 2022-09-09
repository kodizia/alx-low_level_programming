#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that print alphabet in lowercase
 *
 * Return: 0 if succesful
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);

}
