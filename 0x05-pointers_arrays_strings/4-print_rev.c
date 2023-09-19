#include "main.h"
/**
* print_rev - A function that prints a string, in reverse,
*followed by a new line
* @s: string
* Return: 0
*/
void print_rev(char *s)
{
int i = 0;
int l;
while (*s != '\0')
{
i++;
s++;
}
s--;
for (l = i; l > 0; l--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
