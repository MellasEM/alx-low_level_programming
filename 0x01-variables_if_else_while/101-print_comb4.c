#include <stdio.h>
/**
* main - Nmbers from 00 to 99 with 3 digits
* Return: 0
*/
int main(void)
{
  int i = '0', j = '0', k = '0';
  
  while (i <= '7')
  {
    while (j <= '8')
    {
      while (k <= '9')
      {
        if (i < j && j < k)
        {
          putchar(i);
          putchar(j);
          putchar(k);
          if (!(i == '7' && j == '8' && k == '9'))
          {
            putchar(',');
            putchar(' ');
          }
        }
        
        k++;
      }
      
      k = '0';
      j++;
    }
    
    j = '0';
    i++;
  }
  
  putchar('\n');
  return (0);
}
