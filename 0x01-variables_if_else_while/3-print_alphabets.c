#include <stdio.h>
/**
* main - Prints the lowercase and uppercase.
(*
* Return: 0 (On Success)
*/
int main(void)
{
char c = 'a', d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
