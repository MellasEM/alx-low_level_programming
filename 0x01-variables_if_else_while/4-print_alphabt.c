#include <stdio.h>
/**
* main - Prints the alphabet except the letters q and e.
(*
* Return: 0 (On uccess)
*/
int main(void)
{
  char c = 'a';
  
  while (c <= 'z') //while loop to create alphabets
  {
    if (c != 'q' && c != 'e') // if the alphabets is q or c then it won't be written
    {
      putchar(c);
    }
    c++;
  }
  putchar('\n');
  return (0);
}
