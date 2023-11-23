#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to be converted
 * @index:  is the index, starting from 0 of the bit you want to get
 *
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		return ((n >> index) & 1);
	}

	return (-1);
}
