/**
 * int binary_to_uint - A function that converts a binary to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if b is null or one of the chars is 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsinged int bin;
	bin = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		bin = (bin << 1) + (*b - '0');
		b++
	}

	return bin;
}
