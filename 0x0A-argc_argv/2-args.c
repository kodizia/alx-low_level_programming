#include <stdio.h>
#include "main.h"
/**
* main - print each argument
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on successful
*/
int main(int argc, char *argv[])
{

int n;
for (n = 0; n < argc; n++)
printf("%s\n", argv[n]);
return (0);
}
