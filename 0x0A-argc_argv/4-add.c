#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - check the digit
 * @s: charachter to convert
 * Return: 0 (On sucess)
*/

int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
{
return (0);
}
s++;
}
return (1);
}
/**
 * main - adds positive numbers
 * @argc: number of argv array
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (is_digit(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}
