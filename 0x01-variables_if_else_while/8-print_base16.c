#include <stdio.h>
/**
* main - Print base 16 numbers
* Return: 0
*/
int main(void)
{
  //print numbers from 0 to 9
  int i = '0';
  while (i <= '9')
  {
    putchar(i);
    i++;
  }

  //print from a to f
  i = 'a';
  while (i <= 'f')
  {
    putchar(i);
    i++;
  }
  
  //print a new line and return 0
  putchar('\n');
  return (0);
}
