#include "main.h"
/**
* main - Prints _putchar
*
* Return: 0 (On Sucess)
*/

int main(void)
{
char *h = "_putchar\n";
while (*h)
{
_putchar(*h);
h++;
}
return (0);
}
