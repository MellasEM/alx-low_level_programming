#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 0)
{
putchar('0');
}
else
{
putchar(',');
putchar(' ');
putchar(' ');
putchar(' ');
if (i * j < 10)
{
putchar(' ');
}
int result = i * j;
while (result > 0)
{
putchar(result % 10 + '0');
result /= 10;
}
}
}
putchar('$');
putchar('\n');
}
}
