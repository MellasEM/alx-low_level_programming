#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int m = 1;
	char *n = (char *)&m;


	return ((*n == 1) ? 1 : 0);
}
