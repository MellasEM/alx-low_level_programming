#include <stdio.h>
/**
* main - Print Number
* Return: 0 (On Success)
*/

int main(void)
{
  int i = '0';
  while (i <= '9')
  {
    putchar(i);
    i++;
  }
  putchar('\n');
  return (0);
}
