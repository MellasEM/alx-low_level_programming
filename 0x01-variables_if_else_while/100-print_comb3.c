#include <stdio.h>
/**
* main - Nmbers from 00 to 99.
* Return: 0
*/
int main(void)
{
int i = '0', j = '0';
while (i <= '9')
{
while (j <= '9')
{
if (!(i > j || i == j))
{
putchar(i);
putchar(j);
if (i == '8' && j == '9')
{
putchar('\n');
}
else
{
putchar(',');
utchar(' ');
}
}
j++;
}
j = '0';
i++;
}
return (0);
}
