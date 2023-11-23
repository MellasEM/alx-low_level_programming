include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n;
	unsigned long int b;

	n = 0;
	b = n ^ m;

	while (b)
	{
		n += b & 1;
		b >>= 1;
	}

	return (n);
}
