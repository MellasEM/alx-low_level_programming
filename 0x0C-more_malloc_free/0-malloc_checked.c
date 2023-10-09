#include main.h
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: int to allocate
 * Return: size
 */

void *malloc_checked(unsigned int b)
{
void *i;

i = malloc(b);

if (i == NULL)
exit(89);
return (i);
}
