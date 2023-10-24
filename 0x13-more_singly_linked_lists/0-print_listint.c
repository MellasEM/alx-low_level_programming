#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{

	size_t s;

	s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}

	return (s);
}
