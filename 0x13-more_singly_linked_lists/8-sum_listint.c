#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer
 * Return: sum of all the data (n)  or NULL if empty
 */

int sum_listint(listint_t *head)
{
	int i;

	i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
