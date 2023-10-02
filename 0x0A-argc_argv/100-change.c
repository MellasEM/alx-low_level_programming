#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of argv array
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int cents, coins = 0;
int denominations[] = {25, 10, 5, 2, 1};
int num_denominations = sizeof(denominations) / sizeof(denominations[0]);
int i;
if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}

for (i = 0;  i < num_denominations; i++)
{
while (cents >= denominations[i])
{
cents -= denominations[i];
coins++;
}
}

printf("%d\n", coins);
return (0);
}

