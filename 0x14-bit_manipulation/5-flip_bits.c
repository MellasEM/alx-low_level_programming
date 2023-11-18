#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number 1
 * @m: numver 2
 *
 * Return: bits fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned long int bits;

	num = 0;
	bits = n ^ m;

	while (bits)
	{
		num += bits & 1;
		bits >>= 1;
	}
	return (num);
}
