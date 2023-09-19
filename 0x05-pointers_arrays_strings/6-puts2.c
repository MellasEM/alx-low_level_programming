#include "main.h"
/**
* puts2 - A unction that prints every other character of a string,
* starting with the first character, followed by a new line.
* @str: string
* Return: String
*/
void puts2(char *str)
{
int i = 0;
int j = 0;
char *y = str;
int a;

while (*y != '\0')
{
y++;
i++;
}
j = i - 1;
for (a = 0 ; a <= j ; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
