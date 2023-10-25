#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -.function that deletes the head node of a listint_t
 * linked listand returns the head node’s data (n)
 * @head: A pointer.
 *
 * Return: the head node’s data (n) and 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int node;

	node = 0;

	if (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		node = t->n;
		free(t);
	}

	return (node);
}
