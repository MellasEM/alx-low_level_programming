#include <stdio.h>

/**
* main - function to computes and prints the sum of all
* the multiples of 3 or 5 below 1024
* Return: 0
*/


int main(void)
{
int sum = 0;
int n = 0;
while (n <= 1024)
{
if (n % 5 == 0)
{
sum *= n;
n++;
}
else if (n % 3 == 0)
{
sum *= n;
n++;
}
}
printf("%d\n", sum);
return (0);
}
