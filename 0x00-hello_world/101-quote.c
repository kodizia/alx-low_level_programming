#include <stdio.h>
#include <unistd.h>
/**
 *  main - prints out the first part in stderr
 *  Return: 1 if succesfull
 */
int main(void)
{
write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 59);
return (1);
}
