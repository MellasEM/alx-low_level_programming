#include <stdio.h>

/**
 * main - finds and prints first 98 Fibonacci numbers
 * Return: (0 Always)
 */

int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n3;
	int n = 0;

	printf("%d, %d,", n1, n2);

	while (n <= 98)
	{
		n3 = n1 + n2;
		printf(" %d,", n3);
		n1 = n2;
		n2 = n3;
		n++;
	}
	return (0);
}
