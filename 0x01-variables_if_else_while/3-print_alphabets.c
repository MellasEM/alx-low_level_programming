#include <stdio.h>

/**
* main - Prints the lowercase and uppercase.
(*
* Return: 0 (On Success)
*/

int main(void)
{
  char c = 'a', d = 'A';
  
  // Using a while loop to write alphabets in lowercase
  while (c <= 'z')
  {
    putchar(c);
    c++;
  }

  // Using a second while loop to write alphabets in uppercase
  while (d <= 'Z')
  {
    putchar(d);
    d++;
  }
  
  putchar('\n');
  return (0);
}
