#include <stdio.h>
/**
 * main - Sum of even Fibonacci sequences less than 4000000
 * Return: (0 Always)
 */

int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n3 = 0;
	int sum = 2;
	while (n3 <= 4000000)
	{
		if (n3 % 2 == 0)
			  {
				  sum += n3;
			  }
		int temp = n3;
		n3 = n1 + n2;
		n1 = n2;
		n2 = temp;
	}

	printf("%d\n", sum);
	return 0;
}
