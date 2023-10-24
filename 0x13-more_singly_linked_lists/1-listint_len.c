#include <stddef.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of element
 * @h: Poniter to the head
 * Return: elements number
 */

size_t listint_len(const listint_t *h)
{
	size_t c;

	c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
