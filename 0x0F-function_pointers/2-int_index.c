#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - funcrion that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: Points to a function
 * Return: none
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
{
return (-1);
}

if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}

return (-1);
}
