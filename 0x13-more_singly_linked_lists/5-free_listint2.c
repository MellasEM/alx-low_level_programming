#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: A pointer
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *c, *t;

	if (head == NULL)
		return;

	c = *head;

	while (c != NULL)
	{
		t = c->next;
		free(c);
		c = t;
	}

	*head = NULL;
}
